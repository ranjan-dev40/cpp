#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int ans;
    // base case
    if(n==0) return 1;

    return n * factorial(n-1);

}

int main(){
    int n;

    cin>>n;

    int res = factorial(n);
    cout<<res<<endl;


    
    return 0;
} 

/*
What --->  ?
book ---> when a function call itself  directly or indirectly  Recursion
  ===>   jab hamare badi aur complex problem ho aur uska solution
       depend karta same type ki chhoti problem par ta ham recursion ka use karenge

       mere ko ek base case chahiye function call ko terminate karne ke liye
       aur dusra recurrence relation chahiye 

       // tail recursiom
       {
        // base case
        //processing
        //recurrence relation
       }

       // head recursion
       {
        // base case
        //recurrence relation
        //processing
       }

 ====>
    1 step leta ja, 
    aur baki ka recursive call kar le
    aur ek rukne ka condition chahiye ki maine solve kar li problem

*/