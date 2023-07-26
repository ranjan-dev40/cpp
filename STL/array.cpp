#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int, 4> a ={1,2,3,4};
    cout<<a.size()<<endl;
    for(int i=0; i<a.size(); i++ ){
        cout<<"size of array "<<a[i]<<" ";
    }
       
       cout<<"Element at 3 index "<<a.at(3)<<endl;
       cout<<"Empty or not "<<a.empty()<<endl;
       cout<<"first element "<<a.front()<<endl;
       cout<<"first element "<<a.back()<<endl;



    return 0;
}