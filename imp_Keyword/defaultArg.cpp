#include<bits/stdc++.h>
using namespace std;

/* default arguments ki game hamesha rightmost arguments  se start hota hai. right to left
   make argument optional  ---> dena hai to de de warna apna to use kar hi lunga.
*/
void print(int arr[], int n, int start=0){
    for(int i =start; i<n; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5] = {1,4,7,8,9};
    int size = 5;
    print(arr,size);
    print(arr,size,2);

    

    
    return 0;
}