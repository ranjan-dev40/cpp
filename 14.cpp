//code by UEM203125 Abhishek Ranjan
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *prev;
    node *next;
};
struct node *insertAtLast(struct node *head, int ele)
{
    struct node *p = new node;
    p->data = ele;
    p->next = NULL;
    struct node *ptr = head;
    if (head != NULL)
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = p;
        p->prev = ptr;
    }
    else
    {
        p->prev = NULL;
        head = p;
    }
    return head;
}
void display(struct node *head)
{
    struct node *p = head;
    while (p != NULL)
    {
        cout << p->data << " <-> ";
        p = p->next;
    }
    cout << endl;
}
void countdups(struct node *head)
{
    int count = 0;
    struct node *curr = head;
    while (curr->next != NULL)
    {
        struct node *t = curr->next;
        while (t != NULL)
        {
            if (curr->data == t->data)
            {
                count++;
                break;
            }
            t = t->next;
        }
        curr = curr->next;
    }
    cout << "The number of duplicates in the given list is " << count;
}
int main()
{
    struct node *head = NULL;
    int n, ele;
    cout << "Enter the size of the doubly linked list\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter an element\n";
        cin >> ele;
        head = insertAtLast(head, ele);
    }
    display(head);
    countdups(head);
    return 0;
}

