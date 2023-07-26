#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int size){
    if(size == 0||size == 1) return true;
    if(arr[0]>arr[1]) return false;

    else{
       return isSorted(arr+1, size-1); 
    }

}
int getSum(int *arr, int size){
    if(size == 0) return 0;
    if(size == 1) return arr[0];
    return arr[0]+ getSum( arr+1,  size-1);

}

bool linearSearch(int arr[], int n, int val){
    if(n == 0) return 0;
    if(arr[0] == val) return 1;
    return linearSearch(arr+1, n-1, val);
}




bool binarySearch(int arr[],int s, int e, int val){
    if(s>e) return 0;
    
    int mid = s+(e-s)/2;

    if(arr[mid] == val) return 1;

    if(arr[mid]<val) binarySearch(arr,mid+1,e, val);


    else binarySearch(arr, s , mid-1, val);

}

int main(){
    int arr[5] = {2,4,6,8,9};
    int size = 5;
    int key = 10;
    int res = binarySearch(arr, 0, 5, key);

    if(res) cout <<"present"<<endl;
    else cout<<"not present"<<endl;
    // int arr[3] = {2,4,6};
    // int size = 3;

    // int ans = isSorted(arr, size);
    // int sum = getSum(arr, size);
    // cout<<"sum array is: "<<sum<<endl;
   
    // if(ans) cout<<"Array is sorted"<<endl;
    // else cout<<"Array is sorted"<<endl;


    // int ans = linearSearch(arr, size, 6);
    // if(ans) cout<<"present"<<endl;
    // else cout<<"not present"<<endl;


    
    return 0;
} 