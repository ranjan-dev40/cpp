#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int size;
    int top;
    char *S;
};

void create(struct Stack *st, string &exp)
{

    // cout << "Enter size" << endl;
    st->size = exp.length();
    st->top = -1;
    st->S = new char[st->size];
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

void push(struct Stack *st, char x)
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
    char x = -1;
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

int isBalance( string &exp){

    struct Stack st;

    create(&st, exp);

    for(int i=0; exp[i]!='\0'; i++){
        if(exp[i] == '(' or exp[i] == '{'  or exp[i] == '[')
        push(&st, exp[i]);

        else if(exp[i] == ')' or exp[i] == '}' or exp[i] == ']' ){
            if(isEmpty(st)) return false;

            pop(&st);
        }


    }

    return isEmpty(st)? true:false;

}

int main()
{

    // string exp = "((a+b) * (c-d) ";
    string exp = "{([a+b] * [c-d])/e ";

    cout<< isBalance(exp);
  
  

    return 0;
}