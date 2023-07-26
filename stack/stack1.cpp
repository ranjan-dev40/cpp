#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;

    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    cout<<"Top Element: "<<s.top()<<endl;
    // cout<<"Empty or Not: "<<s.empty()<<endl;
    if(s.empty()) cout<<"Stack is empty"<<endl;
    else cout<<"stack is not empty"<<endl;

    cout<<"size of stack is : "<<s.size()<<endl;




    return 0;
}
