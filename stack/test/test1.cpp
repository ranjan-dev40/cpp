// 1. Write a recursive function to compute the count of vowels and consonants in a string
// 2. Write a function to check if a given number is a prime number
#include<bits/stdc++.h>
using namespace std;


// int countVowelAndConsonants(string s, int i, int count){
//     if(s.length() == i){
//         return count;
//     }

//     if((s[i] == 'a' || s[i] == 'e'  || s[i] == 'i'  || s[i] == 'o'  || s[i] == 'u') ||(s[i] == 'A' || s[i] == 'E'  || s[i] == 'I'  || s[i] == 'O'  || s[i] == 'U')){
//         count++;
//     }

//     i++;
//     return countVowelAndConsonants(s, i, count);
// }


bool prime(int n){

    bool flag = true;
    if(n == 0 || n== 1)  flag = false;

    for(int i=2; i<=n/2; i++){
         if(n%i == 0){
            flag = false;
         }
    }

    return flag;
}


int main(){



    // int a = 10;
    // char ch = 'a';
    // ch = ch + a;
    // printf("%c\n", ch);


   

    int n;
    cin>> n;

    if(prime(n)) cout<< "Number is prime"<<endl;
    else cout<<"Numer is not prime"<<endl;

    // string s;
    // cin>>s;
    // int cntVowel = countVowelAndConsonants(s, 0, 0);
    // int cntConsonant = s.length() - cntVowel;
    // cout<<"count of consonent"<< cntConsonant <<endl;
    // cout<<"count of "<< vowel <<endl;



    return 0;
}