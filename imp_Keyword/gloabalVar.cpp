#include<bits/stdc++.h>
using namespace std;

/*
int score = 15; // kabhi use mat karna gandi baat(bad practice hai ye).
  
  any function can modify the value of global variable.

*/

void a(int& i){
    cout<<i<<endl;
    b(i);
    
}
void b(int& i){
    cout<<i<<endl;
}

int main(){
    int i=5;
    a(i);

    
    return 0;
}


