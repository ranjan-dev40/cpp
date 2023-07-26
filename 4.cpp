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

    int temp = a[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
    cout << endl;

    //Output the Array
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
