#include<bits/stdc++.h>
using namespace std;

int main(){
    // create karna to tune sikh liya
    // unordered_map<string, int> m;
    map<string, int> m;


    // pahla tarika
    pair<string, int> p = make_pair("babbar",3);
    m.insert(p);

    // dusra tarika insert karne ka 
    pair<string, int> pair2("love",2);
    m.insert(pair2);

    // tisra trika insert karne ke liye

    m["mera"] = 1;
    m["mera"]  =2;  // "mera" key ke liye value update ho jayegi 

    /* har key ke liye keval ek single value hoogi 
     yaha pe duplicate entry nahi milne wali, key are unique
    har ek key ke corresponding ek hi entry hogi
   */

  // searching

//   cout<<m["mera"]<<endl; 
//   cout<<m.at("babbar") <<endl; 
  // cout<<m["UnknownKey"]<<endl;
  m["UnknownKey"]; 
// // //   cout<<m.at("UnknownKey") <<endl; 

// //   // size 
//   cout<<m.size()<<endl;


//   // to check present
// //   cout<<m.count("bro");

//   // erase
//   m.erase("love");
//   cout<<m.size()<<endl;



//   for(auto i:m){
//     cout<<i.first<<" "<<i.second<<endl;

//   }
 
  // iterator
  // unordered_map<string, int> :: iterator it = m.begin();
  map<string, int> :: iterator it = m.begin();
  while(it != m.end()){
     cout<<it->first<<" "<<it->second<<endl;
     it++;

  }


    
    return 0;
} 

