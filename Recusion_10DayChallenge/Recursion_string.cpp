#include<bits/stdc++.h>
using namespace std;

// void reverse(string &s,int i, int j){

//     if(i>j) return;
//     swap(s[i], s[j]);
//     i++;
//     j--;
//     reverse(s, i,  j);
// }
// bool isPalindrom(string &s,int i, int j){

//     if(i>j) return true;
//     if(s[i]!=s[j]) return false;
//     else {
//        return  isPalindrom(s, i+1,  j-1);
//     }
// }

// int power(int a, int b)
// {
//     //base case
//     if(b== 0) 
//         return 1;

//     if(b == 1) 
//         return a;

//     // Recursive call
//     int res = power(a,b/2);

//     // b is even

//     if(b%2 == 0) {
//         return res*res;
//     }

//     // b is odd

//     else {
//         return a*res*res;
//     }


// }
   
   





int main(){

    string s = "abcdecba";
    int i=0;
    int j = s.length()-1;

    // cout<<"before: "<<s<<endl;
    // reverse(s,i,j);
    // cout<<"after: "<<s<<endl;

    // if(isPalindrom(s,i,j)) cout<<"this is palindrome "<<endl;
    // else cout<<"this is not palindrome "<<endl;

    // int ans  = power(3,11);
    // cout<<ans<<endl;

    return 0;
} 