#include<bits/stdc++.h>
using namespace std;

void insertionSort(int *arr, int n){

   for(int i=1; i<n; i++){
    int temp = arr[i];
    int j = i-1;
    for(; j>=0; j--){
        if(arr[j]>temp) arr[j+1] = arr[j];
        else break;
    }

    arr[j+1] = temp; 
   }

}

int main(){

    int n=5;

    int arr[5] = {64, 25, 12, 22, 11};

    insertionSort(arr, n);


    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    } 
    return 0; 
}
