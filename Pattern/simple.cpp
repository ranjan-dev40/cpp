#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

     int i=1;   

    while(i<=n){

        int j=1;
        while(j<=n){
            // cout<<"*"; n=3 ***;***;*** 
            // cout<<i; n=4 1111;2222;3333;4444;
            // cout<<j; n=4  1234;1234;1234;1234;
            // cout<<n-j+1; n=5  54321;54321;54321;54321;54321;
            j=j+1;
        }
        cout<<endl; 
        i=i+1;

    }
    return 0;
}