#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> a(5,1);
    vector<int> last(a);
    // cout<<"size->"<<v.size()<<endl;
    // cout<<"capacity"<<v.capacity()<<endl;
    // v.push_back(1);
    // cout<<"capacity"<<v.capacity()<<endl;
    // v.push_back(10);
    // cout<<"capacity"<<v.capacity()<<endl;
    // v.push_back(13);
    // cout<<"capacity"<<v.capacity()<<endl;
    // v.push_back(7);
    // cout<<"capacity"<<v.capacity()<<endl;
    // v.push_back(9);
    // cout<<"capacity"<<v.capacity()<<endl;
    // cout<<"size->"<<v.size()<<endl;
    // cout<<"element at index 2: "<<v.at(2)<<endl;
    // cout<<"front: "<<v.front()<<endl;
    // cout<<"back: "<<v.back()<<endl;
    // cout<<"before pop "<<endl;
    // for(int i:v){
    //     cout<<i<<" ";
    // }
    // v.pop_back();
    // cout<<endl;
    // cout<<"after pop "<<endl;
    //   for(int i:a){
    //     cout<<i<<" ";
    // }
      for(int i:last){
        cout<<i<<" ";
    }

    v.clear();
     cout<<"size->"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
      

    return 0;
}