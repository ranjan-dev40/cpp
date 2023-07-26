//code by UEM203125 Abhishek Ranjan
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void printReverse(struct node *head)
{
    if (head == NULL)
        return;
    printReverse(head->next);
    cout << head->data << " -> ";
}
int main()
{
    int n;
    struct node *head, *p, *prev;
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
    printReverse(head);
    return 0;
}
