#include<iostream>
#include<stack>
using namespace std;

int main(){
   stack<string> s;

   s.push("ranjan");
   s.push("rohit");
   s.push("goyal");

   cout<<"top element: "<<s.top()<<endl;
   cout<<"stack size: "<<s.size()<<endl;
   s.pop();
   cout<<"after pop: "<<endl;

   cout<<" stack size: "<<s.size()<<endl;

   cout<<"empty or not: "<< s.empty()<<endl;

    return 0;
}