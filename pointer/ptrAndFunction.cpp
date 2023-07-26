#include<bits/stdc++.h>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}
void update(int *p){
     p = p+1;
     cout<<p<< endl;
     
}
void update_Val(int *p){
     *p = *p+1;
     
}

void getSum(int *arr, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    cout<<"sum is: "<<sum<<endl;
    }

void square(int *p){
    int a=10;
    p= &a;
    *p = (*p) * (*p);
}
void q(int z){
    z += z;
    cout<<z<<" ";
}
void p(int *y){
    int x = *y + 2;
    q(x);
    *y = x -1;
    cout<<x<<" ";
}

int main(){
    // int value =5;
    // int *p = &value;

//    cout<<"before update: "<<*p<<endl;
//    update_Val(p);
//    cout<<"after update: "<<*p<<endl;


//    cout<<"before update: "<<p<<endl;
//    update(p);
//    cout<<"after update: "<<p<<endl; // same as before output of p

// int arr[6] ={1,2,3,4,5,8};

// getSum(arr+3, 3);

// int a=10;
// square(&a);
// cout<<a<<endl;
int a=5;
p(&a);
cout<<a<<endl;

    return 0;
}