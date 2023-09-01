#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>> n;

    int i=0, ans=0;

    while(n!=0){
        int bit = n&1;
        if(bit){
            ans = ans + pow(10, i);
        }

        n= n>>1;
        i++;
    }


    cout<<ans;


    return 0;
}