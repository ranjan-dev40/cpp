#include <bits/stdc++.h>
using namespace std;

struct Array
{
    int a[10];
    int size;
    int length;
};

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void display(Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.a[i] << " ";
    }
}

void append(Array *arr, int x)
{

    if (arr->length < arr->size)
    {
        arr->a[arr->length++] = x;
    }
}

void insert(Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->a[i] = arr->a[i - 1];
        }
        arr->a[index] = x;
        arr->length++;
    }
}
int Delete(Array *arr, int index)
{
    int x = 0;
    if (index >= 0 && arr->length)
    {
        x = arr->a[index];
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->a[i] = arr->a[i + 1];
        }
        arr->length--;
        return x;
    }

    return 0;
}

int linear_search(Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->a[i])
        {
            // swap(&arr->a[i], &arr->a[i - 1]); // transmitting
            swap(&arr->a[i], &arr->a[0]); //
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

int main()
{

    struct Array arr1 = {{8, 3, 7, 12, 6, 9}, 10, 6};
    int arr[] = {2, 3, 4, 10, 40};

    // append(&arr1, 10);
    // insert(&arr1, 3, 15);
    // Delete(&arr1, 4);
    // cout << linear_search(&arr, 9) << endl;
    cout << binarySearch(arr, 0, 5, 4);

    // display(arr);

    return 0;
}