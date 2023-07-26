#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void alternate(int arr[], int size)
{

    int i = 0;
    int j = 1;

    while (j < size)
    {
        swap(arr[i], arr[j]);
        i += 2;
        j += 2;
    }
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};
    alternate(arr, 6);
    printArray(arr, 6);

    return 0;
}