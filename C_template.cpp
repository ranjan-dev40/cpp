#include <bits/stdc++.h>
using namespace std;
template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T x, T y);
    T add();
    T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T x, T y)
{

    this->a = x;
    this->b = y;
}

template <class T>
T Arithmetic<T>::add()
{
    T c;
    c = a + b;
    return c;
}

template <class T>
T Arithmetic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}

int main()
{
    Arithmetic<float> ar(10.66, 5.88);

    cout << ar.add() << endl;
    cout << ar.sub() << endl;

    return 0;
}