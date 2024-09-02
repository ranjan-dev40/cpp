#include <bits/stdc++.h>
using namespace std;

struct Connection
{
    string city1;
    string city2;
    int goods;
    int tax;
};

void pick_up_service(int N, const string &start, const vector<Connection> &connections)
{
    map<string, vector<pair<int, pair<int, string>>>> graph;
    map<string, int> taxes;

    for (int i = 0; i < N - 1; ++i)
    {
        const Connection &connection = connections[i];
        graph[connection.city1].push_back({-connection.goods, {connection.tax, connection.city2}});
        taxes[connection.city2] = connection.tax;
    }

    for (auto &x : graph)
    {
        sort(x.second.begin(), x.second.end());
    }

    vector<string> route;
    function<void(const string &)> dfs = [&](const string &city)
    {
        route.push_back(city);
        for (const auto &n : graph[city])
        {
            dfs(n.second.second);
            route.push_back(city);
        }
    };

    dfs(start);
    int total_tax = 0;

    for (size_t i = 1; i < route.size(); ++i)
    {
        total_tax += taxes[route[i]];
    }

    cout << route[0];
    for (size_t i = 1; i < route.size(); ++i)
    {
        cout << "-" << route[i];
    }

    cout << endl;
    cout << total_tax;
}

int main()
{
    int N;
    cin >> N;

    vector<Connection> cons;

    for (int i = 0; i < N - 1; ++i)
    {
        Connection connection;
        cin >> connection.city1 >> connection.city2 >> connection.goods >> connection.tax;
        cons.push_back(connection);
    }

    pick_up_service(N, cons[0].city1, cons);

    return 0;
}
