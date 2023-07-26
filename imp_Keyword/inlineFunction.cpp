#include<bits/stdc++.h>
using namespace std;

inline int getMax(int& a, int& b){
     return (a>b) ? a:b;
}

void func(int a,int b){
    a++;
    b++;
    cout<<a<<" "<<b<<endl;
}

int main(){
    int a=1,b=2;
    int ans = 0;
    // // func(a,b);
    // if(a>b) ans = a;
    // else ans = b;

    ans = getMax(a,b);
    cout<<ans<<endl;

    b = b+1;
    a= a+3;
    ans = getMax(a,b);
    cout<<ans<<endl;


    
    return 0;
}

/*  inline function ---> used to reduce the function call overload

fayada  --> no extra memry and no function call overhead
    
    {
        1 -- line ---> make inline .
        2 se 3 line ka block hai to comiler ke upar depend karta hai
        agar fuction ka block  3 se line se jyada hai to compiler bolega ---> nikal lawde
    }


*/