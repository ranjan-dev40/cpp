// code by UEM203125 Abhishek Ranjan
#include <iostream>
using namespace std;
struct node
{
    char data;
    struct node *next;
};
struct node *insertAtStart(struct node *head, char ele)
{
    struct node *p;
    p = new node;
    p->data = ele;
    p->next = head;
}
struct node *insertAtPos(struct node *head, char ele, int pos)
{
    struct node *p, *q;
    p = new node;
    p->data = ele;
    q = head;
    for (int i = 1; i < pos - 1; i++)
    {
        q = q->next;
    }
    p->next = q->next;
    q->next = p;
    return head;
}
struct node *insertAtEnd(struct node *head, char ele)
{
    struct node *p, *q;
    p = new node;
    p->data = ele;
    p->next = NULL;
    if (head == NULL)
        return p;
    q = head;
    while (q->next != NULL)
        q = q->next;
    q->next = p;
    return head;
}
void display(struct node *head)
{
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data;
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head;
    head = NULL;
    head = insertAtStart(head, 'A');
    head = insertAtPos(head, 'B', 2);
    head = insertAtPos(head, 'H', 3);
    head = insertAtPos(head, 'I', 4);
    head = insertAtPos(head, 'S', 5);
    head = insertAtPos(head, 'H', 6);
    head = insertAtPos(head, 'E', 7);
    head = insertAtEnd(head, 'K');
    display(head);
    return 0;
}
