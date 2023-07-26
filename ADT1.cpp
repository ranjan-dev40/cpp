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

int get(Array arr, int index)
{
    if (index >= 0 && index < arr.length)
    {
        return arr.a[index];
    }
    return -1;
}

void set_data(Array *arr, int index, int x)
{
    {
        if (index >= 0 && index < arr->length)
        {
            arr->a[index] = x;
        }
    }
}

int max(Array arr)
{
    int max = arr.a[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.a[i] > max)
        {
            max = arr.a[i];
        }
    }
    return max;
}
int min(Array arr)
{
    int min = arr.a[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.a[i] < min)
        {
            min = arr.a[i];
        }
    }
    return min;
}

int sum(Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum += arr.a[i];
    }
    return sum;
}
float avg(Array arr)
{
    return (float)sum(arr) / arr.length;
}

void reverse(Array *arr)
{

    int *b, i, j;
    b = new int[arr->length];
    for (i = (arr->length - 1), j = 0; i > 0; i--, j++)
    {
        b[j] = arr->a[i];
    }
}
void reverse_1(Array *arr)
{

    for (int i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        swap(&arr->a[i], &arr->a[j]);
    }
}

void is_sort(Array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.a[i] > arr.a[i + 1])
        {
            return false;
        }
    }
    return true;
}

void insertSort(Array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->size == arr->length)
    {
        return;
    }

    while (i >= 0 && arr->a[i] > x)
    {
        arr->a[i + 1] = arr->a[i];
        i--;
    }
    arr->a[i + 1] = x;
    arr->length++;
}

void Rearrange(Array *arr)
{
    int i = 0;
    int j = arr->length - 1;

    while (i < j)
    {

        while (arr->a[i] < 0)
        {
            i++;
        }
        while (arr->a[j] > 0)
        {
            j--;
        }
        if (i < j)
            swap(&arr->a[i], &arr->a[j]);
    }
}

int main()
{

    struct Array arr = {{8, 3, 7, 12, 6}, 10, 5};

    // set_data(&arr, 2, 15);
    // display(arr);
    // cout << endl;
    // cout << max(arr) << endl;
    // cout << min(arr) << endl;
    insertSort(&arr, 9);

    return 0;
}