#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
       if(size - top >1){
        top++;
        arr[top] = element;
       }
       else{
        cout<<"stack is overflow"<<endl;
       }      
    }
    void push(){
        if(top>=0) top--;
        else cout<<"Stack underflow"<<endl;

    }
    int peek(){
        if(top>=0 ) return arr[top];
        else {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1) return true;
        else return false;

    }


};

int main(){
    Stack st(5);

    st.push();
    st.push();
    st.push();
    st.push();





    return 0;
}

//  top ek aisa index hai jisme hame push karna hai 
