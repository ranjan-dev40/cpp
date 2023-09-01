#include <iostream>

using namespace std; 

void add(int&x){
  x+= 1;

}


void add(int&& x){

x+2;
}




int main(){

int x = 20;
 add(x); 
 cout << x <<"\t";
 add(10);
cout << x << endl;
 return 0;
}
