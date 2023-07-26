#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(12);
    q.push(13);
    q.push(15);
    q.push(17);

    cout<<"size of queue: "<< q.size()<<endl;
    q.pop();
    cout<<"size of queue: "<< q.size()<<endl;
    cout<<"front element: "<< q.front()<<endl;
    cout<<"rear element "<< q.back()<<endl;

    if(q.empty()) cout<<"queue is empty"<<endl;
    else cout<<"queue is not empty"<<endl;


    return 0;
}