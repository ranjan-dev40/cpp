//code by UEM203125 Abhishek Ranjan
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void func(node *&head)
{
    node *i = head;
    node *j = head;
    while (i->next != NULL)
    {
        if (i->next->data > i->data)
        {
            if (i == head)
            {
                head = i->next;
                free(i);
                i = head;
                j = head;
            }
            else
            {
                j->next = i->next;
                free(i);
                i = j->next;
            }
        }
        else
        {
            j = i;
            i = i->next;
        }
    }
    return;
}
void display(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
}
int main()
{
    int n;
    cout << "Enter size" << endl;
    cin >> n;
    node *head, *prev;
    head = NULL;
    prev = NULL;
    cout << "Enter elements" << endl;
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
    func(head);
    display(head);
}
