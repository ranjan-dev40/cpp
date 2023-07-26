#include<iostream>
#include<list> // it is implimented using doubly linked list
using namespace std;

int main(){
     // There is no random access
     list<int> l;
     list<int> n(l);
     list<int> m(5,10);


     l.push_back(1);
     l.push_front(2);

     for(int i:m){
        cout<<i<<" ";
     }
   //   l.pop_back();
   //   l.pop_front();
     cout<<endl;
     l.erase(l.begin());
     cout<<"after erase: "<<endl;
     for(int i:l){
        cout<<i<<" ";
     }




    return 0;
}