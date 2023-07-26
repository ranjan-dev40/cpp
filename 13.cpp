//code by UEM203125 Abhishek Ranjan
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *insertInEmpty(struct node *head, int ele)
{
    if (head != NULL)
    {
        return head;
    }
    struct node *p = new node;
    p->data = ele;
    head = p;
    p->next = head;
    return head;
}
struct node *insertAtLast(struct node *head, int ele)
{
    if (head == NULL)
    {
        return insertInEmpty(head, ele);
    }
    struct node *p = new node;
    p->data = ele;
    p->next = head;
    struct node *ptr = head;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = p;
    return head;
}
void display(struct node *head)
{
    struct node *ptr = head;
    do
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    } while (ptr != head);
    cout << endl;
}
int main()
{
    struct node *head = NULL;
    int n, ele;
    cout << "Enter the size of the circular linked list\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter an element\n";
        cin >> ele;
        if (i == 0)
        {
            head = insertInEmpty(head, ele);
        }
        else
        {
            head = insertAtLast(head, ele);
        }
    }
    display(head);
    int sum;
    struct node *head2 = NULL;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        struct node *t = head;
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                sum += t->data;
                t = t->next;
            }
            else
            {
                t = t->next;
            }
        }
        if (i == 0)
        {
            head2 = insertInEmpty(head2, sum);
        }
        else
        {
            head2 = insertAtLast(head2, sum);
        }
    }
    display(head2);
    return 0;
}
