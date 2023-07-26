//code by UEM203125 Abhishek Ranjan
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
    void reverseWithoutRecursion(int n);
    void insertAtBottom(int ele);
    void reverseWithRecursion();
    void display();
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
    if (top == -1)
    {
        cout << "Stack underflow\n";
    }
    else
    {
        top = top - 1;
        return stack[top + 1];
    }
}
void Stack::display()
{
    cout << stack[top] << " <--" << endl;
    for (int i = top - 1; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
}
void Stack::reverseWithoutRecursion(int n)
{
    int temp;
    int index = 0;
    int indexLast = top;
    while (index < indexLast)
    {
        temp = stack[indexLast];
        stack[indexLast] = stack[index];
        stack[index] = temp;
        index++;
        indexLast--;
    }
    top = n - 1;
}
void Stack::insertAtBottom(int ele)
{
    if (top == -1)
    {
        push(ele);
    }
    else
    {
        int top = pop();
        insertAtBottom(ele);
        push(top);
    }
}
void Stack::reverseWithRecursion()
{
    if (top != -1)
    {
        int top = pop();
        reverseWithRecursion();
        insertAtBottom(top);
    }
}
int main()
{
    Stack s1;
    cout << "Enter the number of elements you want to insert\n";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter an element to push into the stack\n";
        int ele;
        cin >> ele;
        s1.push(ele);
    }
    int choice, elmnt;
    do
    {
        cout << "1.Display the stack\n";
        cout << "2.Reverse the stack without recursion\n";
        cout << "3.Reverse the stack with recursion\n";
        cout << "4.Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            s1.display();
            break;
        case 2:
            s1.reverseWithoutRecursion(n);
            break;
        case 3:
            s1.reverseWithRecursion();
            break;
        case 4:
            break;
        default:
            cout << "Wrong choice!";
        }
    } while (choice != 4);
    return 0;
}
