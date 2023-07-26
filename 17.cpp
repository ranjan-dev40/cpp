//code by UEM203125 Abhishek Ranjan
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
node *reverse(node *head, int k)
{
    node *curr = head;
    node *nxt = NULL;
    node *back = NULL;
    int count = 0;
    while (curr != NULL && count < k)
    {
        nxt = curr->next;
        curr->next = back;
        back = curr;
        curr = nxt;
        count++;
    }
    if (nxt != NULL)
    {
        head->next = reverse(nxt, k);
    }
    return back;
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
    node *p, *head, *prev;
    head = NULL;
    cout << "Enter the size of the linked list \n";
    cin >> n;
    cout << "Enter the list\n";
    for (int i = 0; i < n; i++)
    {
        p = new node();
        cin >> p->data;
        p->next = NULL;
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
    int k;
    cout << "Enter the value of k\n";
    cin >> k;
    head = reverse(head, k);
    cout << "Reversed linked list inn groups of " << k << " :-\n";
    display(head);
}
