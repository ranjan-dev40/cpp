#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
       this-> data = d;
       this->next = NULL;
    }
};

Node* reverse1(Node* &head){
     if(head == NULL || head->next == NULL) 
        return head;

     Node* newHead = reverse1(head->next);

     head->next->next = head;
     head->next = NULL;

     return newHead;



}



int main(){





    return 0;
}