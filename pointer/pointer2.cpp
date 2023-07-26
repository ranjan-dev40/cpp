#include<bits/stdc++.h>
using namespace std;

int main(){
//     // int *p=0;
//     // cout<<*p<<endl;

//     // int i=5;
//     // int *q =&i;
//     // cout<<q<<endl;
//     // cout<<*q<<endl;
// ;
//     // int *p=0;
//     // p = &i;

//     // cout<<p<<endl;
//     // cout<<*p<<endl;

//     int num = 5;
//     int a = num;
//     cout<<"before: "<<num<<endl;

//     a++;
//     cout<<"after: "<<num<<endl;
//     int *p = &num;

//     cout<<"before: "<<num<<endl;

//     (*p)++;
//     cout<<"after: "<<num<<endl;

//     //copying a pointer

//     int *q = p;
//     cout<<p<<"-"<<q<<endl;
//     cout<<*p<<"-"<<*q<<endl;

    //pointer Arithmetic
    int i=3;
    int *t = &i;
    // cout<<(*t)++<<endl;
    *t = *t + 1;
    cout<<(*t)<<endl;

    cout<<"before t "<<t<<endl;
    t = t+1;/// t=100   then it become t = 104 because integer take 4 byte .
    cout<<"after t "<<t<<endl;





    
    return 0;
}