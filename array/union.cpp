#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(int ar1[], int ar2[], int m, int n) {
        set<int> s;
        vector<int> v;
        
        for(int i = 0; i < m; i++){
         s.insert(ar1[i]);
        }

        for(int i = 0; i < n; i++){

             if(s.find(ar2[i]) == s.end()){
                 s.insert(ar2[i]);
             }
        }

        for(auto i : s)
         v.push_back(i);
        return v;
}

void print(vector<int> ans){
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}


int main(){

    int n=9;
    int m=10;

    int a[n] = { 1, 2, 5, 6, 2, 3, 5, 7, 3 };
    int b[m] = { 2, 4, 5, 6, 8, 9, 4, 6, 5, 4 };

    vector<int> ans = findUnion(a, b, n, m);

    print(ans);


    return 0;
}
