#include<bits/stdc++.h>
#include <cstdlib>
#include <ctime>


using namespace std;


bool isSuccess()
{
    //Sending is done with the probablity.
    //Currently probablity of successful send is 3/4
    return rand()%4;
}


void displaylist(vector<int> &v)
{
    for (auto i : v) {cout<<i<<" ";}
    cout<<"\n";
}

void sendFrameWithProb(int a, int &b, int i, stack<int> &ack)
{
    //a is sender, b is receiver
    if (isSuccess() && (ack.top() == i))
    {
        b = a;        
        ack.push(i+1); //Since acknowledgement comes as i+1.
    }
}

void goBackNARQ(vector<int> senderlist, vector<int> &receiverlist, int windowSize)
{
    cout<<"0 means correct data is there at that place, 1 means incorrect/no data is at that place.\n\n";
    cout<<"Sender list : "; displaylist(senderlist); cout<<"\n\n";


    stack<int> ack; ack.push(0);
    int senderSize = senderlist.size();


    int i = 0;
    int j = min(i+windowSize, senderSize);


    while (i < senderSize)
    {
        while (i < j)
        {
            sendFrameWithProb(senderlist[i], receiverlist[i], i, ack);
            i++;
  }


        cout<<"Rec. list : "; displaylist(receiverlist);
        cout<<"Next Acknowledgement at index = "<< ack.top() <<"\n\n";


        if ( ack.empty() || (ack.top() < i) )
        {
            i = ack.top();
        }
       
        j = min(i+windowSize, senderSize);


        if (!ack.empty())
        {
            int tmp = ack.top();
            while (!ack.empty()) {ack.pop();}
            ack.push(tmp);
        }
    }
}

int main()
{
    srand(static_cast<unsigned int>(std::time(nullptr)));


    int n = 2; //bit field size
    int windowSize = pow(2, n); //for both sender and receiver


    cout<<"Window size is : "<<windowSize<<"\n\n";


    vector<int> senderlist(windowSize*2, 1); //suppose it is thrice of window size
    vector<int> receiverlist(windowSize*2, 0);


    goBackNARQ(senderlist, receiverlist, windowSize);


    return 0;
}

