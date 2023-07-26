#include<bits/stdc++.h>
using namespace std;

int main(){
    int num =5;
    cout<<"address of num: "<<&num<<endl;

    // int *ptr;  // Aisa kabhi nahi karna......kyuki ye kisi aise location ko modify kar sakta hai jo ki program ki memory me na ho
   int *ptr = &num;

   cout<<"value is: "<<*ptr<<endl;
   cout<<"address is: "<<ptr<<endl;
   cout<<"size of pointer is: "<<sizeof(ptr)<<endl;
   

    
    return 0;
}