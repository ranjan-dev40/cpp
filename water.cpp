#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int w1, w2;
    w2 = n - w1;

    n < 100;

    for (w1 = 1; w1 < n; w1++)
    {

        if (w1 % 2 && w2 % 2 == 0)
        {
            cout << "YES";
            break;
        }
        else
        {
            cout << "NO";
            break;
        }
    }

    return 0;
}
