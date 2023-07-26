#include<bits/stdc++.h>
using namespace std;
int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    unordered_map<int, int> count;
    for(int i=0; i<arr.size(); i++){
        count[arr[i]]++;
    }

    int maxi = INT_MIN;
    int ans = -1;
    for(auto i:count){
        if(i.second > maxi){
            maxi = i.second;
            ans = i.first;
        }
    }

    return ans;
}
 
   
int main(){
    vector<int> arr = {1,2,3,5,2,7,3,2,4,2,8,2};
    int n= arr.size();

    cout<< maximumFrequency(arr, n)<<endl;

   



    
    return 0;
} 

