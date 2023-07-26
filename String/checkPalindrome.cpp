#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(char x[], int n){
    int s=0;
    int e = n-1;
    while(s<e){
        if(x[s]!=x[e]) return 0;
        else{
             s++;
             e--;
       } 
  

    }

    return 1;
}
int getLength(char name[]){
     int cnt = 0;
    for(int i =0; name[i]!='\0'; i++){
        cnt ++;
    }

    return cnt;

}



int main(){
    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>> name;
   
    // length of string
   int length = getLength(name);


   if(checkPalindrome(name, length)) cout<<"palindrome"<<endl;
   else cout<<"not Palindrome"<<endl;

    return 0;
}