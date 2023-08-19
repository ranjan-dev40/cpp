
#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row = 1;

    while(row <= n) {

        //Print karo space (1st triangle)
        int space = row -1;
        while(space) {
            cout<<" ";
            space = space -1;
        }

        //print 2nd triangle 
        int j = 1;
        while(j <= n-row+1 ) {
            cout<<"*";
            // cout<<j;
            j = j + 1;
        }

        //print 3rd triangle

        int start = n-row;
        while(start) {
            cout<<"*";
            // cout<<start;
            start = start - 1;
        }

        cout<<endl;
        row = row + 1;
    }
    return 0;
}