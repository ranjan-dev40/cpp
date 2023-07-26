#include<bits/stdc++.h>
using namespace std;

void sayDigit(int n, string str[]){
    if(n==0) return;

    int digit = n%10;
    n=n/10;

    sayDigit(n, str);
    cout<<str[digit]<<" ";

}

int main(){

    string str[10] = {"zero","one","two","three",
              "four","five","six","seven","eight","nine"};

    int n;
    cin>>n;

    cout<<endl<<endl<<endl<<endl;
    sayDigit( n,  str);
    cout<<endl<<endl<<endl<<endl;

    
    return 0;
} 