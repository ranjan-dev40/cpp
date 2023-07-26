#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

} *first = NULL;

void create(int a[], int n)
{

    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
void displayRec(struct Node *p)
{
    // Space consuming process ...
    if (p != NULL)
    {
        cout << p->data << " ";
        displayRec(p->next);
    }
}
void R_display(struct Node *p)
{
    // Space consuming process ...
    if (p != NULL)
    {
        R_display(p->next);
        cout << p->data << " ";
    }
}

int count(struct Node *p)
{
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }

    return count;
}
int Rcount(struct Node *p)
{
    if (p == NULL)
        return 0;
    return 1 + Rcount(p->next);
}

int add(struct Node *p)
{
    int sum = 0;
    while (p != 0)
    {
        sum += p->data;
        p = p->next;
    }

    return sum;
}
int add_R(struct Node *p)
{
    if (p == NULL)
        return 0;

    else
        return add_R(p->next) + p->data;
}

int max(struct Node *p)
{
    int max = INT_MIN;
    while (p != 0)
    {

        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}
int R_max(struct Node *p)
{
    int x = 0;
    if (p == 0)
        return INT_MIN;

    x = max(p->next);

    return x > p->data ? x : p->data;
}
int min(struct Node *p)
{
    int min = INT_MAX;
    while (p != 0)
    {

        if (p->data < min)
            min = p->data;
        p = p->next;
    }
    return min;
}
int R_min(struct Node *p)
{
    int x = 0;
    if (p == 0)
        return INT_MAX;

    x = min(p->next);

    return x > p->data ? x : p->data;
}

struct Node *search(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (p->data == key)
            return p;
        p = p->next;
    }
    return NULL;
}
struct Node *R_search(struct Node *p, int key)
{
    if (p == NULL)
        return NULL;
    if (p->data == key)
        return p;

    return R_search(p->next, key);
}
struct Node *searching(struct Node *p, int key)
{
    struct Node *q = NULL;
    while (p != 0)
    {
        if (p->data == key)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }

        q = p;
        p = p->next;
    }
    return NULL;
}

void insert(struct Node *p, int pos, int x)
{
    struct Node *t;
    if (pos < 0)
        return;

    t = new Node;
    t->data = x;
    if (pos == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }

        t->next = p->next;
        p->next = t;
    }
}

int Delete(struct Node *p, int pos)
{

    struct Node *q = NULL;
    int x = -1;

    if (pos < 1)
        return -1;
    if (pos == 1)
    {
        q = first;
        first = first->next;
        x = first->data;
        delete q;
        return x;
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
        return x;
    }
}

bool isSorted(struct Node *p)
{
    int x = INT_MIN;
    while (p != NULL)
    {

        if (p->data < x)
        {
            return false;
        }

        x = p->data;
        p = p->next;
    }
    return true;
}

void RemoveDuplicates(struct Node *p)
{
    struct Node *q = p->next;

    while (q != 0)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

void Reverse_Ele(struct Node *p)
{
    int *A, i = 0;
    struct Node *q = p;

    A = new int[count(p)];
    while (q != NULL)
    {
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while (q != NULL)
    {
        q->data = A[i];
        q = q->next;
        i--;
    }
}

void Reverse_L(struct Node *p)
{
    struct Node *q = NULL, *r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

void Reverse_REC(struct Node *q, struct Node *p)
{
    if (p != NULL)
    {
        Reverse_REC(p, p->next);
        p->next = q;
    }
    else
    {
        first = q;
    }
}

int main()
{

    struct Node *res, *res1, *res2;
    int a[] = {3, 5, 7, 10, 15};
    int b[] = {3, 5, 5, 8, 8, 8};

    create(a, 5);
    // create(b, 6);
    // displayRec(first);

    // cout << endl;
    // cout << endl;
    // cout << "calling number of node recursively" << endl;

    // cout << Rcount(first);
    // cout << add(first) << endl;
    // cout << add_R(first) << endl;
    // cout << max(first) << endl;
    // cout << min(first) << endl;
    // cout << R_max(first) << endl;
    // cout << R_min(first) << endl;
    // res = search(first, 15);
    // res1 = R_search(first, 15);
    // res2 = searching(first, 15);
    // cout << res << endl
    //      << res1 << endl
    //      << res2 << endl;
    // insert(first, 3, 2);
    // display(first);
    // int x = Delete(first, 3);

    // cout << x << " is deleted.";

    // cout << isSorted(first);

    // RemoveDuplicates(first);
    // Reverse_Ele(first);
    Reverse_L(first);
    display(first);

    return 0;
}