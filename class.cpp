#include <bits/stdc++.h>
using namespace std;

class Arithmetic
{
private:
    int a;
    int b;

public:
    Arithmetic(int x, int y);
    int add();
    int sub();
};

Arithmetic::Arithmetic(int x, int y)
{

    this->a = x;
    this->b = y;
}

int Arithmetic::add()
{
    int c;
    c = a + b;
    return c;
}
int Arithmetic::sub()
{
    int c;
    c = a - b;
    return c;
}

int main()
{
    Arithmetic ar(10, 5);

    cout << ar.add() << endl;
    cout << ar.sub() << endl;

    return 0;
}