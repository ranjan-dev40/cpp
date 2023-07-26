#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(4);
    v.push_back(7);
    v.push_back(15);

    cout<<"finding 7: "<<binary_search(v.begin(),v.end(),7)<<endl;
    cout<<"lower bound 7: "<<lower_bound(v.begin(),v.end(),7)- v.begin()<<endl;
    cout<<"upper bound 7: "<<upper_bound(v.begin(),v.end(),7)- v.begin()<<endl;
    
    int a=9, b=8;
    
    cout<<"max: " <<max(a,b)<<endl;
    cout<<"min: "<<min(a,b)<<endl;
    cout<<"before swap: "<<endl<<"a: "<<a<<endl<<"b: " <<b<<endl;
    swap(a,b);
    cout<<"after swap: "<<endl<<"a: "<<a<<endl<<"b: " <<b<<endl;
    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd<<endl;

    rotate(v.begin(),v.begin()+1, v.end());
    cout<<"after rotate: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}