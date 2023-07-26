//code by UEM203125 Abhishek Ranjan
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

void insertathead(node *&head, int val)
{
    struct node *n = new node;
    n->data = val;
    n->next = head;
    head = n;
}

void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

int countWithoutUsingRecursion(struct node *head)
{
    int count = 0;
    struct node *curr = head;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    return count;
}
int countUsingRecursion(struct node *head)
{
    if (head == NULL)
        return 0;
    return 1 + countUsingRecursion(head->next);
}
int main()
{
    struct node *head = NULL;
    insertathead(head, 5);
    insertathead(head, 4);
    insertathead(head, 3);
    insertathead(head, 2);
    insertathead(head, 1);
    display(head);
    int count1 = countWithoutUsingRecursion(head);
    int count2 = countUsingRecursion(head);
    cout << "The number of elements in the linked list (without using recursion) is " << count1 << endl;
    cout << "The number of elements in the linked list (using recursion) is " << count2 << endl;
    return 0;
}
