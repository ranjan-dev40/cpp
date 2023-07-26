#include <bits/stdc++.h>
#include <random>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
vector<int> eventList = {INT_MAX, INT_MAX};
int numsDelayed = 0, totalDelay = 0, bt = 0, avgCust = 0, systemBusy = 0, reject = 0;
bool serverStatus = false;
int clck = 0;
queue<int> arrivalList;
queue<int> timesOfArrival;
int getArrivalTime(int &lastTime)
{
    poisson_distribution<int> psd(500);
    int arrivalTime = psd(rng) + lastTime + 1;
    lastTime = arrivalTime;
    return arrivalTime;
}
int getServiceTime(int currTime)
{
    poisson_distribution<int> psd(550);
    int serviceTime = psd(rng) + currTime;
    return serviceTime;
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < 20 * n; i++)
    {
        int t = getArrivalTime(clck);
        arrivalList.push(t);
    }
    clck = 0;
    eventList[0] = arrivalList.front();
    arrivalList.pop();
    int lastTime = 0;
    while (numsDelayed < n)
    {
        if (eventList[0] < eventList[1])
        {
            systemBusy += serverStatus;
            if (serverStatus)
            {
                clck = eventList[0];
                if (timesOfArrival.size() == m)
                {
                    reject++;
                }
                else
                {
                    timesOfArrival.push(clck);
                }
                if (arrivalList.empty())
                    eventList[0] = INT_MAX;
                else
                {
                    eventList[0] = arrivalList.front();
                    arrivalList.pop();
                }
            }
            else
            {
                serverStatus = true;
                numsDelayed++;
                clck = eventList[0];
                eventList[1] = getServiceTime(clck);
                if (arrivalList.empty())
                    eventList[0] = INT_MAX;
                else
                {
                    eventList[0] = arrivalList.front();
                    arrivalList.pop();
                }
            }
        }
        else
        {
            clck = eventList[1];
            eventList[1] = INT_MAX;
            if (!timesOfArrival.empty())
            {
                eventList[1] = getServiceTime(clck);
                numsDelayed++;
                totalDelay += clck - timesOfArrival.front();
                timesOfArrival.pop();
            }
            else
                serverStatus = false;
        }
        avgCust += (serverStatus + timesOfArrival.size() + reject) * (clck - lastTime);
        bt += serverStatus * (clck - lastTime);
        lastTime = clck;
    }
    cout << "Average number of customers in the system: " << 1.0 * avgCust / clck << endl;
    cout << "Average delay in the system: " << 1.0 * totalDelay / n << endl;
    cout << "System utilization: " << 1.0 * bt / clck << endl;
    cout << "Probability of a customer finding the server busy: " << 1.0 * systemBusy / n << endl;
    cout << "Probability of a customer being rejected: " << 1.0 * reject / n << endl;
}
