//code by UEM203125 Abhishek Ranjan
#include <iostream>
using namespace std;
int main()
{
    int size, count, temp;
    cout << "Enter the size of the array\n";
    cin >> size;
    int a[size];

    //Input the Array
    cout << "Enter the array\n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            count = 0;
            if (a[j] == a[i])
            {
                count++;
                temp = a[j];
                for (int k = j; k > i; k--)
                {
                    a[k] = a[k - 1];
                }
                a[i + 1] = temp;
            }
        }
        i += count;
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
