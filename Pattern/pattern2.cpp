#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row=1;
    // char ch = 'A';
    while(row<=n){
        int col = 1;
        // char ch = 'A'+ row -1;
        while(col <= n){
        // char ch = 'A'+ col -1;
        char ch = 'A'+ row+ col -2;

            cout<<ch;
            ch = ch + 1;
            col = col+1;

        }
        cout<<endl;
        row = row+1;
    }


    return 0;
}