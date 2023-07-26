//code by UEM203125 Abhishek Ranjan
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
struct node *reverseList(struct node *head)
{
    node *current = head;
    node *prev = NULL, *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        // Reverse current node's pointer
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
void display(struct node *head)
{
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }
}
int main()
{
    int n;
    struct node *head, *p, *prev, *ptr;
    head = NULL;
    cout << "Enter the size of the linked list \n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        p = new node;
        cout << "Enter a number \n";
        cin >> p->data;
        p->next = NULL;
        if (head == NULL)
            head = p;
        else
            prev->next = p;
        prev = p;
    }
    head = reverseList(head);
    display(head);
    return 0;
}
