#include <iostream>
using namespace std;

int main()
{

    int arr[8] = {13, 5, 20, 35, 2, 42, 67, 17};
    int i, data;

    cout << "Enter the data";
    cin >> data;

    // searching algorithm for given array
    for (i = 0; i < 8; i++)
    {
        if (arr[i] == data)
        {
            cout << i << endl;

            break;
        }
    }

    if (i == 8)
    {
        cout << "Data is not found in this array " << endl;
    }

    return 0;
}