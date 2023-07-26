#include <iostream>
using namespace std;
struct node
{
    char data;
    struct node *next;
};
int main()
{
    struct node a, b, c, d, e, f, g, h;
    struct node *p;
    a.data = 'A';
    b.data = 'B';
    c.data = 'H';
    d.data = 'I';
    e.data = 'S';
    f.data = 'H';
    g.data = 'E';
    h.data = 'K';
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;
    f.next = &g;
    g.next = &h;
    h.next = NULL;

    p = &a;
    while (p != NULL)
    {
        cout << p->data;
        p = p->next;
    }

    return 0;
}
