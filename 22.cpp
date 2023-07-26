//code by UEM203125 Abhishek Ranjan
#include <bits/stdc++.h>
using namespace std;
class Stack
{
private:
    int stack[30];
    int top;

public:
    void push(char ele);
    void pop();
    bool duplicate_parenthesis(string exp, int n);
    Stack()
    {
        top = -1;
    };
};
void Stack::push(char ele)
{
    if (top == 29)
    {
        cout << "Stack overflow\n";
    }
    else
    {
        top++;
        stack[top] = ele;
    }
}
void Stack::pop()
{
    if (top == -1)
    {
        cout << "Stack underflow\n";
    }
    else
    {
        top--;
    }
}
bool Stack::duplicate_parenthesis(string exp, int n)
{
    for (int i = 0; i < n; i++)
    {

        if (exp[i] == ')')
        {
            char temp = stack[top];
            pop();
            int elementsInside = 0;
            while (temp != '(')
            {
                elementsInside++;
                temp = stack[top];
                pop();
            }
            if (elementsInside <= 1)
            {
                return 1;
            }
        }
        else
            push(exp[i]);
    }
    return false;
}
int main()
{
    string exp;
    Stack s2;
    cout << "Enter an expression\n";
    getline(cin, exp);
    int n = exp.length();
    if (s2.duplicate_parenthesis(exp, n))
    {
        cout << "This expression contains duplicate parenthesis \n";
    }
    else
    {
        cout << "This expression does not contain any duplicate parenthesis \n";
    }
    return 0;
}
