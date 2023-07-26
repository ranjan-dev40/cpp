#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
   struct Node *next;

}*front=NULL,*rear=NULL;

void enqueue(int x){
    struct Node *t;
    t = new Node;
    if(t==NULL) cout<<"Queue is full"<<endl;
    else{
        t->data = x;
        t->next = NULL;
        if(front == NULL) front= rear = t;
        else{
            rear->next = t;
            rear=t;
        }
    }
}  

int dequeue(){
    int x=-1;
    struct Node* t;
    if(front == NULL)cout<<"queue is empty"<<endl;
    else{
        x = front->data;
        t=front;
        front = front->next;
        delete t;
    }

    return x;
}

void display(){
    struct Node *p = front;
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }

    cout<<endl;
}

int main(){
    enqueue(10);
    enqueue(15);
    enqueue(17);
    enqueue(23);
    enqueue(34);

    display();
    cout<<dequeue();
    return 0;

}