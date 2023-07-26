//code by UEM203125 Abhishek Ranjan

#include <iostream>
using namespace std;

int main()
{
    int size, k = 0, sum = 0;
    cout << "Enter the size of the array\n";
    cin >> size;
    int a[50];
    cout << "\nEnter the elements of the array\n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int choice;
    do
    {

        cout << "Press 1 to insert an element in the array\n";
        cout << "Press 2 to delete an element in the array\n";
        cout << "Press 3 to calculate the sum of elements in the array\n";
        cout << "Press 4 to reverse the array\n";
        cout << "Press 5 to check for duplicate elements, remove them and produce a unique array\n";
        cout << "Press 6 to exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the element you want to insert\n";
            int ele;
            cin >> ele;
            cout << "\nEnter the position you want to insert it at\n";
            int pos;
            cin >> pos;
            size++;
            for (int i = size; i >= pos; i--)
            {
                a[i] = a[i - 1];
            }
            a[pos - 1] = ele;

            for (int i = 0; i < size; i++)
            {
                cout << a[i] << " ";
            }
            break;
        case 2:
            int position;
            cout << "Enter the position of the element to be deleted \n";
            cin >> position;

            if (position > size || position < 0)
            {
                cout << "Element not found";
            }
            else
            {
                for (int j = position - 1; j < size; j++)
                {
                    a[j] = a[j + 1];
                }
                size = size - 1;
            }

            for (int i = 0; i < size; i++)
            {
                cout << a[i] << " ";
            }
            break;
        case 3:
            for (int i = 0; i < size; i++)
            {
                sum += a[i];
            }
            cout << endl
                 << "The sum of elements in the array is " << sum << endl;
            break;
        case 4:
            for (int i = size - 1; i >= 0; i--)
            {
                cout << a[i] << " ";
            }
            break;
        case 5:
            int temp;
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
                    a[k++] = a[i];
                }
            }
            size = k;
            for (int i = 0; i < size; i++)
            {
                cout << a[i] << " ";
            }
            break;
        case 6:
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 6);
    return 0;
}
