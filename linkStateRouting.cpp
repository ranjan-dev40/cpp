#include <bits/stdc++.h>
using namespace std;

struct node
{
    vector<int> dist;
    vector<int> from;
    node(int n)
    {
        dist.resize(n, INT_MAX);
        from.resize(n, -1);
    }
};

void dijkstra(int src, vector<vector<int>> &dm, vector<node> &route, int n)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});
    route[src].dist[src] = 0;
    route[src].from[src] = src;
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        for (int v = 0; v < n; v++)
        {
            if (dm[u][v] != INT_MAX && route[src].dist[v] > route[src].dist[u] + dm[u][v])
            {
                route[src].dist[v] = route[src].dist[u] + dm[u][v];
                route[src].from[v] = u;
                pq.push({route[src].dist[v], v});
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> dm(n, vector<int>(n, INT_MAX));
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        dm[u][v] = w;
        dm[v][u] = w;
    }
    for (int i = 0; i < n; i++)
        dm[i][i] = 0;

    vector<node> route(n, node(n));

    for (int i = 0; i < n; i++)
    {
        dijkstra(i, dm, route, n);
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Router info for router: " << i << endl;
        cout << "Dest\tNext Hop\tDist" << endl;
        for (int j = 0; j < n; j++)
            printf("%d\t%d\t\t%d\n", j, route[i].from[j], route[i].dist[j]);
    }
}
