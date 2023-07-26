//code by UE203076 Nishtha Arya
#include <iostream>
using namespace std;
class Stack
{
private:
    int stack[30];
    int top;

public:
    void push(int ele);
    int pop();
    Stack()
    {
        top = -1;
    };
};
void Stack::push(int ele)
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
int Stack::pop()
{
    int del_ele;
    if (top == -1)
    {
        cout << "Stack underflow\n";
    }
    else
    {
        del_ele = stack[top];
        top--;
        return del_ele;
    }
    return del_ele;
}
void evaluate_postfix(string postfix, int n)
{
    int i, val, a, b;
    char ch;
    Stack s1;
    for (i = 0; i < n; i++)
    {
        ch = postfix[i];
        if (isdigit(ch))
        {
            s1.push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            a = s1.pop();
            b = s1.pop();
            switch (ch)
            {
            case '*':
                val = b * a;
                break;
            case '/':
                val = b / a;
                break;
            case '+':
                val = b + a;
                break;
            case '-':
                val = b - a;
                break;
            }
            s1.push(val);
        }
    }
    int result = s1.pop();
    cout << "\nResult of postfix expression evaluation : " << result << endl;
}
int main()
{
    string postfix;
    cout << "Enter an expression\n";
    getline(cin, postfix);
    int n = postfix.length();
    evaluate_postfix(postfix, n);
    return 0;
}
