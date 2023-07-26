#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    if(n==0) return;

    cout<<n<<" ";

    // Recursion relation
    print1(n-1);


}
void print2(int n){
    if(n==0) return;

    // Recursion relation
    print2(n-1);


    cout<<n<<" ";



}

int main(){

    int n;
    cin>> n;
    print1(n);

    cout<<endl<<endl;
    print2(n);
    

    
    return 0;
} 