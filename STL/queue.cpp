#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("ranjan");
    q.push("rohit");
    q.push("goyal");

    cout<<"first element: "<<q.front()<<endl;
    cout<<"queue size before pop: "<< q.size()<<endl;
    q.pop();
    cout<<"first element: "<<q.front()<<endl; 
    cout<<"queue size after pop: "<< q.size()<<endl;


    return 0;
}