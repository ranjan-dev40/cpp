#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
            return mid;

        if (key > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;

        mid =  start + (end - start) / 2;
    }

    return -1;
}

int main()
{

    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 5, 7, 15, 17};

    int even_index = binarySearch(even, 6, 12);
    cout << even_index << endl;
    int odd_index = binarySearch(odd, 5, 15);
    cout << odd_index << endl;
    return 0;
}