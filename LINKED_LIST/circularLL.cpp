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
    ~Node(){
        int value = this->data;
        if(this->next == NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }

};

void print(Node* &tail){

    Node* temp = tail;
    if(tail == NULL){
        cout<<"list is empty "<<endl;
        return;
    }

    do{
       cout<<tail->data<<" ";
        tail = tail->next; 
    }while(tail != temp);

    cout<<endl;


// 
//     cout<<tail->data<<endl;
//     while(tail->next != temp){
//         cout<<tail->data<<" ";
//         tail = tail->next;

//     }cout<<endl;
//     
    

}

void insertNode(Node* &tail, int element, int d){
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }

    else{
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }

}

void deleteNode(Node* &tail, int x){
    //Empty list
    if(tail == NULL){ 
    cout<<"list is empty "<<endl;
    return;
    }

    else{

        Node* prev = tail;
        Node* curr = prev->next;
        
        while(curr->data != x){
            prev = curr;
            curr = curr->next;
        }

        prev -> next = curr -> next;
        // for single node
        if(curr == prev){
            tail = NULL;
        }
        else if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;

    }

}

bool isCircular(Node* head){
      
    if(head== NULL) return true;
    if(head -> next == NULL) return false;

    Node* temp = head->next;
    while(temp != NULL && temp!=head ){
        temp = temp->next;
    }

    if(temp == NULL) return false;
    if(temp == head) return true;
}

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*, bool> visited;
    Node* temp = head;
    while(temp!=NULL){
        if(visited[temp] == true) return true;
        visited[temp] = true;
        temp = temp -> next;
    }

    return false;

}

Node* floydDetectLoop(Node* head){
    if(head == NULL) return NULL;
    Node* slow = head;
    Node* fast = head;
    while(slow!=NULL && fast!=NULL){
        fast = fast-> next;
        if(fast!=NULL){
            fast = fast-> next;
        }
        slow = slow->next;

        if(slow == fast){ 
        cout<<"present at "<<slow->data<<" ";
        cout<<endl;
        return slow;
        }
        



    }

    return NULL;
}

Node* getStartingNode(Node* head){
    if(head == NULL) return NULL;
    Node* intersection = floydDetectLoop(head);
    Node* slow = head;
    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;


}

void removeLoop(Node*head){
    if(head == NULL ) return ;
    Node* startLoop = getStartingNode(head);
    Node* temp = startLoop;
    
    while(temp->next!=startLoop){
        temp = temp->next;
    }

    temp->next = NULL;
}  


int main(){

    Node*tail = NULL;
     // empty list me insert kar rahe  hai
    insertNode(tail,5,3);
    print(tail);
    /*
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,7,9);
    print(tail);
    insertNode(tail,5,6);
    print(tail);
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,9,10);
    print(tail);
    insertNode(tail,3,4);
    print(tail);

    deleteNode(tail,3);
    print (tail);
    deleteNode(tail,3);
    print (tail);
    deleteNode(tail,6);
    print (tail);
    deleteNode(tail,10);
    print (tail);

    */

    deleteNode(tail,3);
    print (tail);


    return 0;
}