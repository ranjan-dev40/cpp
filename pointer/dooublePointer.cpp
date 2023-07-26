#include<bits/stdc++.h>
using namespace std;

void update(int **x){
    // // x = x+1;
    // // kuchh change hoga? -No
    // // *x = *x + 1;
    // // kuchh change hoga? -Yes  first pointer ka address change hoga;
    **x = **x + 1;
    // // //kuchh change hoga? -Yes value bhi change hoga 
}
void increment(int **p){
    ++(**p);
    }

int main(){
    // int i=5;
    // int* p = &i;
    // int** q = &p;

    // cout<<"before update: "<<i<<endl;
    // update(q);
    // cout<<"after update: "<<i<<endl;

    // cout<<"p: " <<p<<endl;
    // cout<<"q: "<<q<<endl;
    // cout<<"address p: "<<&p<<endl;
    // cout<<"address q: "<<&q<<endl;
    // cout<<"val q: "<<*q<<endl;

    // cout<<"val i: "<<i<<endl;
    // cout<<"val *p: "<<*p<<endl;
    // cout<<"val **q: "<<**q<<endl;
    // int first =8;
    // int second =18;
    // int *ptr = &second;
    // *ptr = 9;
    // cout<<first <<" "<<second<<endl;
    // int first =6;
    // int *p = &first;
    // int *q = p;
    // (*q)++;
    // cout<<first <<endl;
    // int first =8;
    // int *p = &first;
    // cout<<(*p)++<<" ";
    // cout<<first <<endl;


    // //null pointer
    // int *p = 0;
    // int first =110;
    // *p = first; //segmentation fault
    // cout<<*p <<endl;

    // int arr[6] = {11,12,13};
    // cout<<arr<<" "<<&arr<<endl;  // give the address of first Element

    // int arr[] = {11,21,31,41};
    // int *ptr = arr++; // it is acceptable to change in symbol table

    // cout<<*ptr<<endl;


    // character pointer
    // char  ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout<<*ptr<<endl;


    // character array pointer

    // char  ch[] = "babbar";
    // char *ptr = ch;
    // // ptr++;
    // // cout<<*ptr<<endl;
    // // cout<<ptr<<endl;
    // cout<<ch[0]<<" "<<ptr[0]<<endl;

    // double Pointer
    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 9;
    // cout<<first << " "<<second<<endl;


    // int first = 100;
    // int *p = &first;
    // int **q = &p;
    // int second = ++(**q);
    // int *r = *q;
    // ++(*r);
    // cout<<first << " "<<second<<endl;


    // int num = 110;
    // int *p = &num;
    // increment(&p);
    // cout<<num<<endl;



    


    

    
    return 0;
}