//code by UEM203125 Abhishek Ranjan
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array\n";
    cin >> size;
    int a[size];

    //Input the Array
    cout << "Enter the array\n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    //In case, the array has duplicate elements, this code will remove them and produce a unique array
    int z = 0, temp;
    for (int i = 0; i < size; i++)
    {
        int flag = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[j] == a[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            a[z++] = a[i];
        }
    }
    size = z;

    //kth largest and kth smallest
    int k;
    cout << "\nGive a value for k less than the size of the array\n";
    cin >> k;
    int t;

    //Sorting the array in descending order
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    cout << "kth largest element in the array is " << a[k - 1] << endl;
    cout << "kth smallest element in the array is " << a[size - k];

    return 0;
}
