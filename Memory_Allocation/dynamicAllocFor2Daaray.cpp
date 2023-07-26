#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter number of row:  ";
    cin>>row;
    cout<<"Enter number of col:  ";
    cin>>col;
    

    //dynamic memory ka use karenge bc 

    // create  kar le 2D Array ----> wo bhi dynamically 

    int **arr = new int*[row];
    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    // input le le 2D Array ka 
    for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    // print kara le
    for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    /* agar maine heap ki memory use kar li hai, to us memory ki saf safai
     mujhe hi karna hoga


     chal memory free kara le
     */ 

     for(int i=0; i<row; i++){
        delete []arr[i];
    } 

    delete []arr;


    return 0;
}