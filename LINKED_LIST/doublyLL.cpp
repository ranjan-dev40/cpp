#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int val = this->data;
        if(next !=NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;

    }
};

void print(Node* head){
    Node*  temp = head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp = temp->  next;
    }cout<<endl;
}

int getLen(Node*head){
    int cnt=0;
    Node * temp = head;
    while(temp!=NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void insertAtHead(Node* &head,Node* &tail, int d){

    // empty
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{

        Node* temp = new Node(d);
        temp->next = head;
        head ->prev= temp;
        head = temp;

    }


}
void insertAtTail(Node* &head,Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }

    else{
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail= temp;

    }



}


void insertAtPos(Node* &head,Node* &tail,int pos, int d){
    // shuru me insert karne ke liye
    if(pos == 1) {
        insertAtHead(head,tail, d);
        return;
    }
   
    Node* temp = head;
    for(int i=1; i<pos-1; i++){

      temp= temp->next ;
    }  

    if(temp->next == NULL){
        insertAtTail(head,tail, d);
        return;
    }
    else{
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp ->next->prev = nodeToInsert -> next;
    temp->next = nodeToInsert;
    nodeToInsert -> prev = temp;
    }
}

 

void deleteNode(int pos, Node* &head, Node* &tail){
    // shuru ke node ko delete karna hai
     if(pos==1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
     }
      
     else{
        Node* curr = head;
        Node* prev = NULL;
        for(int i=1; i< pos; i++){
            prev = curr;
            curr = curr->next;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
         if(curr->next == NULL){
            tail = prev;
        }
  
        delete curr;
     }


}





int main(){

    Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    // Node* head = node1;
    // Node* tail = node1;
    // print(head);
    // cout<<getLen(head)<<endl;
    insertAtHead(head,tail, 12);
    // insertAtTail(head,tail, 13);
    // insertAtTail(head,tail, 15);
    // insertAtTail(head,tail, 17);
    // insertAtTail(head,tail, 42);
    // print(head);

    // insertAtPos(head, tail, 3, 4);
    print(head);

 
    return 0;
}


