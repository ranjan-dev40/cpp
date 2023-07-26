// code by UEM203125 Abhishek Ranjan
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void duplicate(node *head)
{
    node *i = head;
    while (i != NULL)
    {
        node *j = i->next;
        node *back = i;
        while (j != NULL)
        {
            if (i->data == j->data)
            {
                back->next = j->next;
                delete (j);
                j = back->next;
            }
            else
            {
                j = j->next;
                back = back->next;
            }
        }
        i = i->next;
    }
}
void display(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }
}
int main()
{
    int n;
    cout << "Enter the size of the linked list\n";
    cin >> n;
    node *head, *prev;
    head = NULL;
    prev = NULL;
    cout << "Enter the linked list\n";
    for (int i = 0; i < n; i++)
    {
        node *p = new node;
        p->next = NULL;
        cin >> p->data;
        if (head == NULL)
        {
            head = p;
        }
        else
        {
            prev->next = p;
        }
        prev = p;
    }
    duplicate(head);
    display(head);
}
