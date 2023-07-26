#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *S;
};

void create(struct Stack *st)
{

    cout << "Enter size" << endl;
    cin >> st->size;
    st->top = -1;
    st->S = new int[st->size];
}

void display(struct Stack st)
{
    while (st.top >= 0)
    {
        cout << st.S[st.top] << " ";
        st.top--;
    }
    cout << endl;
}

void push(struct Stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        cout << "stack  overflow" << endl;
    }
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

int pop(struct Stack *st)
{
    int x = -1;
    if (st->top == -1)
        cout << "stack underflow" << endl;

    else
    {
        x = st->S[st->top];
        st->top--;
    }

    return x;
}

int peek(struct Stack st, int index)
{
    int x = -1;
    if (st.top + index < 0)
        cout << "invalid index" << endl;

    x = st.S[st.top - index + 1];

    return x;
}

int isEmpty(struct Stack st)
{
    if (st.top == -1)
        return 1;

    return 0;
}
int isFull(struct Stack st)
{
    return st.top == st.size - 1;
}

int stackTop(struct Stack st)
{
    if (!isEmpty(st))
        return st.S[st.top];

    return -1;
}

int main()
{

    struct Stack st;

    create(&st);
    push(&st, 10);
    push(&st, 15);
    push(&st, 20);
    push(&st, 30);

    // display(st);
    // cout << pop(&st) << endl;
    // cout << pop(&st) << endl;
    cout << peek(st,1) << endl;
    cout << peek(st,2) << endl;
    display(st);


    return 0;
}