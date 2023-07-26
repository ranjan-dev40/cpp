#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

int nnarysearch(int arr[], int low, int high, int n, int key)
{

    if (low == high)
    {
        if (arr[low] == key)
        {

            return key;
        }
        else
        {

            return 0;
        }
    }
    if (low <= high)
    {
        int cut[n - 1];
        for (int i = 1; i < n; i++)
        {
            cut[i - 1] = (i * (high - low)) / n + low;
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[cut[i]] == key)
            {
                return key;
            }
        }

        if (arr[cut[0]] > key)
        {
            return nnarysearch(arr, low, cut[0], n, key);
        }

        if (arr[cut[n - 2]] < key)
        {
            return nnarysearch(arr, cut[n - 2] + 1, high, n, key);
        }

        for (int i = 1; i < n - 1; i++)
        {
            if (arr[cut[i - 1]] < key && arr[cut[i]] > key)
            {
                return nnarysearch(arr, cut[i - 1] + 1, cut[i], n, key);
            }
        }
    }
    return -1;
}

int main()
{

    int n, key;
    int m, sum, avg;

    cout << "enter the size of array";

    cin >> n >> m;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand() % n) + 1;
    }

    sort(arr, arr + n);

    for (int i = 2; i <= n; i++)
    {
        sum = 0;

        for (int j = 0; j < m; j++)
        {
            key = (rand() % n) + 1;

            auto start = high_resolution_clock::now();

            nnarysearch(arr, 0, n - 1, i, key);

            auto stop = high_resolution_clock::now();
            auto duration = duration_cast<nanoseconds>(stop - start);

            cout << "Time taken by function: " << duration.count() << " nanoseconds" << endl;

            sum += duration.count();
        }

        avg = sum / m;
        cout << "Time taken for" << i << "is" << avg << endl;

        // m--;
    }

    return 0;
}
