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
    bool isEmpty();
    void isBalanced(string exp, int n);
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
bool Stack::isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
        return false;
}
void Stack::isBalanced(string exp, int n)
{
    bool ans = true;
    for (int i = 0; i < n; i++)
        // push if opening bracket
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
            push(exp[i]);
        else
        {
            if (!isEmpty())
            {
                // check if top of stack is pair of current element
                char temp = stack[top];

                pop();

                if (exp[i] == ')' && temp != '(')
                {
                    ans = false;
                    break;
                }
                if (exp[i] == ']' && temp != '[')
                {
                    ans = false;
                    break;
                }
                if (exp[i] == '}' && temp != '{')
                {
                    ans = false;
                    break;
                }
            }
            else
            {
                ans = false;
                break;
            }
        }

    if (!isEmpty())
        ans = false;
    if (ans)
        cout << "balanced";
    else
        cout << "Not balanced";
}
int main()
{
    string exp;
    Stack s2;
    cout << "Enter an expression\n";
    getline(cin, exp);
    int n = exp.length();
    s2.isBalanced(exp, n);
    return 0;
}
