#include <iostream>
using namespace std;

struct node
{
    int dist[9];
    int from[9];
} route[3];

int main()
{
    int dm[3][3] = {{0, 2, 99}, {1, 0, 99}, {3, 2, 0}}, no = 3;

    for (int i = 0; i < no; i++)
    {
        for (int j = 0; j < no; j++)
        {
            dm[i][i] = 0;
            route[i].dist[j] = dm[i][j];
            route[i].from[j] = j;
        }
    }

    bool flag;
    do
    {
        flag = 0;
        for (int i = 0; i < no; i++)
        {
            for (int j = 0; j < no; j++)
            {
                for (int k = 0; k < no; k++)
                {
                    if ((route[i].dist[j]) > (route[i].dist[k] + route[k].dist[j]))
                    {
                        route[i].dist[j] = route[i].dist[k] + route[k].dist[j];
                        route[i].from[j] = k;
                        flag = 1;
                    }
                }
            }
        }
    } while (flag);

    for (int i = 0; i < no; i++)
    {
        cout << "Router info for router: " << i + 1 << endl;
        cout << "Dest\tNext Hop\tDist" << endl;
        for (int j = 0; j < no; j++)
            printf("%d\t%d\t\t%d\n", j + 1, route[i].from[j] + 1, route[i].dist[j]);
    }
    return 0;
}
