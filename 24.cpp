#include <bits/stdc++.h>
#include <chrono>
#include <fstream>
using namespace std;
using namespace std::chrono;

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1], b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void merge_sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}

void quick_sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        quick_sort(arr, l, pi - 1);
        quick_sort(arr, pi + 1, r);
    }
}

void insertionSort(int *array, int size)
{
    int key, j;
    for (int i = 1; i < size; i++)
    {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

int main()
{
    int n;
    cout << "Enter the input size \n";
    cin >> n;
    int x, a[n], b[n], c[n];
    ofstream myfile("random.txt");
    if (myfile.is_open())
    {
        for (int i = 0; i < n; i++)
        {
            int value = rand();
            myfile << value << "\n";
        }
    }
    else
        cout << "Unable to open file";
    myfile.close();
    ifstream myfile2("random.txt");
    if (myfile2.is_open())
    {
        for (int i = 0; i < n; i++)
        {
            myfile2 >> x;
            a[i] = x;
            b[i] = x;
            c[i] = x;
        }
    }
    myfile2.close();
    auto start = high_resolution_clock::now();
    merge_sort(a, 0, n - 1);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by merge sort : " << duration.count() << " microseconds\n";

    start = high_resolution_clock::now();
    quick_sort(b, 0, n - 1);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by quick sort : " << duration.count() << " microseconds\n";

    start = high_resolution_clock::now();
    insertionSort(c, n);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by insertion sort : " << duration.count() << " microseconds\n";
    return 0;
}
