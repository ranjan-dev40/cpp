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
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }
}
int main()
{
    //Input first list
    int n;
    struct node *head, *p, *prev, *ptr;
    head = NULL;
    cout << "Enter the size of the first linked list \n";
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
    //Input second list
    int m;
    struct node *head2, *prev2;
    head2 = NULL;
    cout << "Enter the size of the second linked list \n";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        ptr = new node;
        cout << "Enter a number \n";
        cin >> ptr->data;
        ptr->next = NULL;
        if (head2 == NULL)
            head2 = ptr;
        else
            prev2->next = ptr;
        prev2 = ptr;
    }

    //Concatenate
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head2;
    display(head);
    return 0;
}
