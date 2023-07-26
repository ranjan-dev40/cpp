#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constuctor
    Node(int data){
        this -> data = data;
        this->next = NULL;
    }

};

void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void InsertAtPos(Node* &head,Node* &tail,int pos, int d){
    // shuru me insert karne ke liye
    if(pos == 1) {
        InsertAtHead(head, d);
        return;
    }
   
    Node* temp = head;
    for(int i=1; i<pos-1; i++){

      temp= temp->next ;
    }  

    if(temp->next == NULL){
        InsertAtTail(tail, d);
        return;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}



void Print(Node* & head){

    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }cout<<endl;
    

}

void deleteNode(int pos, Node* &head, Node* &tail){
    // shuru ke node ko delete karna hai
     if(pos==1){
        Node* temp = head;
        head = head->next;
        delete temp;
     }
     
      
     else{
        Node* curr = head;
        Node* prev = NULL;
        for(int i=1; i< pos; i++){
            prev = curr;
            curr = curr->next;
        }
        if(curr->next == NULL){
            tail = prev;
        }


        prev->next = curr->next;
        curr->next = NULL;
        
       
  
        delete curr;
     }


}
int main(){

    Node* node1 = new Node(10);
    // cout<< node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;

    // InsertAtHead(head,12);
    // InsertAtHead(head,62);
    // InsertAtHead(head,37);
    // InsertAtHead(head,13);
    // InsertAtHead(head,42);
    // Print(head);
    InsertAtTail(tail,12);
    InsertAtTail(tail,62);
    InsertAtTail(tail,37);
    InsertAtTail(tail,13);
    InsertAtTail(tail,42);


    InsertAtPos(head,tail,4, 99);
    InsertAtPos(head,tail,3, 69);
    Print(head);

    // cout<<"head ka data: "<<head->data<<endl;
    // cout<<"tail ka data: "<<tail->data<<endl;

    // deleteNode(1,head,tail);
    // Print(head);
    // deleteNode(2,head,tail);
    // Print(head);
    deleteNode(8,head,tail);
    Print(head);
    cout<<"head ka data: "<<head->data<<endl;
    cout<<"tail ka data: "<<tail->data<<endl;
  



    return 0;
}
 