#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;

    int i=1;
    int cnt = 1;
    while(i<=n){
        int j=1;
        while(j<=i){
            // cout<<"*";
            // cout<<i;
            // cout<<j;
            cout<<cnt++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}