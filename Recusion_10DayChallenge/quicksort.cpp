#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){

    /* first element ko pivot le le 
       count kar le kitne element hai jo pivot se chhote hai
        pivot = start + element ka count
    */

   int pivot = arr[s];

   int cnt =0;
   for(int i=s+1; i<=e; i++){
     if(arr[i]<=pivot) cnt++;
   }

   // pivot ko right postion par place kar de
   int pivotIndex = s+cnt;
   swap(arr[pivotIndex], arr[s]);

   // left and right wala part dekh le 
   // left ka sare element pivot se chhota hona chahiye
   // right ka sare element pivot se bada hona chahiye
   int i=s, j=e;
    while(i<pivotIndex && j>pivotIndex){

        while(arr[i]<=pivot) i++;
        while(arr[j]>pivot) j--;

        if(i<pivotIndex && j>pivotIndex){

          swap(arr[i++],arr[j--]);
        }


    }


    return pivotIndex;



}

void quickSort(int arr[], int s, int e){
    // base case 
    if(s>=e) return;
    
    // partition karenge 
    
    int p = partition(arr, s, e);

    quickSort(arr,s,p-1);  // left part ko sort kar le
    quickSort(arr,p+1,e); // right part ko sort kar le 



}

int main(){

    int arr[5] = {2,4,1,6,9};
    int n=5;

    quickSort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    
    return 0;
} 

