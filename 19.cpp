//code by UEM203125 Abhishek Ranjan
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void display(struct node *head)
{
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
struct node *pairSwap(struct node *head)
{
    if (head == NULL || (head)->next == NULL)
    {
        return head;
    }
    struct node *curr = head, *prev = NULL;
    while (curr != NULL && curr->next != NULL)
    {
        struct node *temp = curr->next;
        curr->next = temp->next;
        temp->next = curr;

        if (prev == NULL)
        {
            head = temp;
        }
        else
        {
            prev->next = temp;
        }

        prev = curr;
        curr = curr->next;
    }
    return head;
}
int main()
{
    int n, i;
    struct node *head, *p, *prev;
    head = NULL;
    cout << "Enter the size of the linked list \n";
    cin >> n;
    for (i = 0; i < n; i++)
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
    head = pairSwap(head);
    display(head);
    return 0;
}
