#include <iostream>
using namespace std;
int main()
{
    int i, j;

    cout << "enter two number";

    cin >> i >> j;

    cout << (i > j ? i : j) << " is greater." << endl;

    return 0;
}
