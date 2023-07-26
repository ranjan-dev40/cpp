#include<bits/stdc++.h>
using namespace std;
int getLength(char name[]){
     int cnt = 0;
    for(int i =0; name[i]!='\0'; i++){
        cnt ++;
    }

    return cnt;

}

void reverse(char x[], int length){
    int start =0, end = length -1;
    while(start<end){
        swap(x[start++],x[end--]);
    }

    cout<<x;
    }

int main(){
    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>> name;
    // name[2] = '\0';
    // cout<<"your name is: ";
    // cout<<name<<endl;

    // length of string
   int length = getLength(name);
    cout<<"length of string is: "<<length<<endl;

    reverse(name, length);

    return 0;
}