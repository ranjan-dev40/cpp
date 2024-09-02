#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n){

   for(int i=1; i<n; i++){
    for(int j=0; j<n-i; j++){
        if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
    }
   }

}

int main(){

    int n=5;

    int arr[5] = {64, 25, 12, 22, 11};

    bubbleSort(arr, n);


    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    } 
    return 0; 
}
