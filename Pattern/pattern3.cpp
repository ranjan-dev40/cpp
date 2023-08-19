#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    // char ch = 'A';
    while(i<=n){
        int j=1;
        while(j <= i){

            // char ch ='A' + i -1;
            char ch ='A' + i + j -2;
            cout<<ch;
            // ch++;
            j = j+1;

        }
        cout<<endl;
        i = i+1;
    }


    return 0;
}