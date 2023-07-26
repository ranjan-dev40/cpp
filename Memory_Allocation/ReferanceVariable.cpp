#include<bits/stdc++.h>
using namespace std;
// it is a very bad practice ----> returnReference
// int& func(int a){
//     int num=a;
//     int& ans = num;
//     return ans;
// }
// it is a very bad practice ----> returnPointer
// int* func(int a){
//     int num=a;
//     int* ans = num;
//     return ans;
// }
void update1(int n){ 
    n++;
}
void update2(int& n){  //pass by refrence
    n++;
}

int getSum(int *arr, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    /*
    int i=5; 
    int& j = i;

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;

    int n=5;
    cout<<"before: "<<n<<endl;
    update2(n);
    cout<<"after: "<<n<<endl;

    */

    /*
      ---> Bad practice - Hame compile time pe pata hona chahiye
    int n;
    cin>>n;
    int arr[n];
    ya tu isse achcha 10000 size ka aaray bana le
    int arr[1000];
    */
   int n;
   cin>>n;
   int *arr = new int [n];
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }

   cout<<"answer is: "<<getSum(arr, n)<<endl;;




    



    return 0;
}