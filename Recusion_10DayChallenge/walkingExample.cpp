#include<bits/stdc++.h>
using namespace std;
void reachHome(int src, int dest){
    // cout<<src<<" ";
    if(src == dest) {
        
        cout<<endl<<"Woh! pahuch gaya bc "<<endl;
        return;
    }
    src++;
    reachHome(src, dest); 
}

int main(){
    int dest= 10;
    int src = 1;
  

    reachHome(src, dest);

    
    return 0;
} 