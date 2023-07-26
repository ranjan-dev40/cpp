#include <bits/stdc++.h>
using namespace std;

int algorithm(int i, int count)
{

    count = 1;
    while (i != 1)
    {

        if (i % 2 == 0)
        {
            i = i / 2;
            count++;
        }

        else
        {
            i = (i * 3) + 1;
            count++;
        }
    }

    return count;
}

int main()
{

    vector<int> max_cycleLength{};

    int i, j, c;
    cout << "Enter first number" << endl;
    cin >> i;
    cout << "Enter second number " << endl;
    cin >> j;

    for (int m = i; m <= j; m++)
    {

        c = algorithm(m, 1);
        max_cycleLength.push_back(c);
    }

    sort(max_cycleLength.rbegin(), max_cycleLength.rend());
    cout <<i<<","<<j<<","<< max_cycleLength[0];
    return 0;
}