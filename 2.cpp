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

    //First repeating element
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                cout << "First repeating element is " << a[i] << " at position " << i + 1;
                return 0;
            }
        }
    }
    cout << "No repeating element found";
    return 0;
}
