#include<bits/stdc++.h>
using namespace std;

struct Queue{
    int size;
    int front;
    int rear;
    int *Q;

};

void create(struct Queue *q, int size){
    q->size = size;
    q->front = q->rear = -1;
    q->Q = new int[q->size];


}

void enqueue(struct Queue *q, int x){
    if((q->rear+1)% q->size == q->front) cout<<"Queue is full"<<endl;
    else{
        q->rear = (q->rear+1)%q->size;
        q->Q[q->rear] = x;
    }

}
void dequeue(struct Queue *q){
    int x=-1;
    if(q->rear == q->front) cout<<"Queue is empty"<<endl;
    else{
        q->front=(q->front+1)%q->size;
       x= q->Q[q->front] ;
    }

    cout<<x<< " is deleted form queue"<<endl;

}

void display(struct Queue q){
    for(int i=q.front+1; i<=q.rear; i++){
            cout<<q.Q[i]<<" ";
    }
    cout<<endl;
}





int main(){

    struct Queue q;
    create(&q,5);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,17);
    enqueue(&q,34);
    // cout<<"before deleted first element: "<<endl;
    // display(q);
    // dequeue(&q);
    // cout<<"after deleted first element: "<<endl;
    display(q);

    return 0;

}