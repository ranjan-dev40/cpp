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
struct node *search(struct node *head, int value)
{
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        if (ptr->data == value)
        {
            return ptr;
        }
        ptr = ptr->next;
    }
    return ptr;
}
struct node *insertAtStart(struct node *head)
{
    cout << "\nEnter the element you want to insert\n";
    int ele;
    cin >> ele;
    struct node *p;
    p = new node;
    p->data = ele;
    p->next = head;
    return p;
}
struct node *insertAtEnd(struct node *head)
{
    cout << "\nEnter the element you want to insert\n";
    int ele;
    cin >> ele;
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
struct node *insertAtPos(struct node *head)
{
    cout << "\nEnter the element you want to insert\n";
    int ele, pos;
    cin >> ele;
    cout << "\nEnter the position where you want to insert this element\n";
    cin >> pos;
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
struct node *deletenode(struct node *head)
{
    struct node *p, *q;
    p = head;
    q = p;
    cout << "Enter the element you want to delete";
    int ele;
    cin >> ele;
    while (p != NULL)
    {
        if (p->data == ele)
        {
            if (p == head)
                head = p->next;
            else
                q->next = p->next;
            p->next = NULL;
            free(p);
            return head;
        }
        else
        {
            q = p;
        }
        p = p->next;
    }
    return head;
}
void sortList(struct node *head)
{
    struct node *current = head, *index = NULL;
    int temp;
    while (current != NULL)
    {
        index = current->next;
        while (index != NULL)
        {
            if (current->data > index->data)
            {
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
            index = index->next;
        }
        current = current->next;
    }
}
int main()
{
    int n, i, choice, value;
    struct node *head, *p, *prev, *ptr;
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
    do
    {
        cout << "\nPress 1 to display the linked list\n";
        cout << "Press 2 to search an element in the linked list\n";
        cout << "Press 3 to insert an element in the beginning of the linked list\n";
        cout << "Press 4 to insert an element at the end of the linked list\n";
        cout << "Press 5 to insert an element at a specified position in the linked list\n";
        cout << "Press 6 to delete an element in the linked list\n";
        cout << "Press 7 to sort the linked list in ascending order\n";
        cout << "Press 8 to exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            display(head);
            break;
        case 2:
            cout << "Enter the element you want to search";
            cin >> value;
            ptr = search(head, value);
            if (ptr == NULL)
                cout << "Element not found";
            else
                cout << "Element found";
            break;
        case 3:
            head = insertAtStart(head);
            break;
        case 4:
            head = insertAtEnd(head);
            break;
        case 5:
            head = insertAtPos(head);
            break;
        case 6:
            head = deletenode(head);
            break;
        case 7:
            sortList(head);
            break;
        case 8:
            break;
        default:
            cout << "Wrong choice!";
        }
    } while (choice != 8);
    return 0;
}
