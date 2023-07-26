#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col){
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            if(arr[row][col] == target) return 1;
        }
    } 
    return 0;
}
// print row wise Sum
void printRowSum(int arr[][3], int row, int col){
    cout<<"Printing sum row-wise ---> "<<endl;
    for(int row=0; row<3; row++){
        int sum =0;
        for(int col=0; col<3; col++){
            sum += arr[row][col]; 
        }
        cout<<sum<<" ";
    } 
}
// print column wise Sum
void printColSum(int arr[][3], int row, int col){
    cout<<"Printing sum column-wise ---> "<<endl;
    for(int col=0; col<3; col++){
        int sum =0;
        for(int row=0; row<3; row++){
            sum += arr[row][col]; 
        }
        cout<<sum<<" ";
    } 
}
int largestRowSum(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int row=0; row<3; row++){
        int sum =0;
        for(int col=0; col<3; col++){
            sum += arr[row][col]; 
        }
        if(sum>maxi) {
            maxi = sum;
            rowIndex = row;
        }
    }

    cout<<"The maximum sum is "<< maxi << endl; 
    return rowIndex;

}

int main()
{ 
    // create 2-D array
    int arr[3][3];
    // int arr[3][3] = {1,2,3,3,5,6,7,8,9,10,11,12};
    // int arr[3][3] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    cout<<"Enter the element "<<endl;
    // taking input row_wise
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>> arr[i][j];
        }
    }
    // taking input column_wise
    // for(int col=0; col<3; col++){
    //     for(int row=0; row<3; row++){
    //         cin>> arr[col][row];
    //     }
    // }
    // print array 
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    } 
    // int ele;
    // cout<<"Enter the element to search: "<<endl;
    // cin>> ele;

    // if(isPresent(arr, ele,3,3)) cout<<"Element found "<<endl;
    // else cout<<"not found"<<endl;
    printRowSum(arr, 3, 3);
    cout<<endl; 
    // printColSum(arr, 3, 3);

    cout<<"Max row is at index "<< largestRowSum(arr, 3, 3)<<endl;


    return 0;
} 