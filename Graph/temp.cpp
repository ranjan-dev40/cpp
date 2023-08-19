// A O(n) solution for finding rank of string
 
#include <bits/stdc++.h>
using namespace std;
#define MAX_CHAR 256
 
// A utility function to find factorial of n
int fact(int n) {
    return (n <= 1) ? 1 : n * fact(n - 1);
}
 
// Construct a count array where value at every index
// contains count of smaller characters in whole string
void populateAndIncreaseCount(int* count, string str)
{
    int i;
 
    for (i = 0; str[i]; ++i)
        ++count[str[i]];
 
    for (i = 1; i < MAX_CHAR; ++i)
        count[i] += count[i - 1];
}
 
// Removes a character ch from count[] array
// constructed by populateAndIncreaseCount()
void updatecount(int* count, char ch)
{
    int i;
    for (i = ch; i < MAX_CHAR; ++i)
        --count[i];
}
 
// A function to find rank of a string in all permutations
// of characters
int findRank(string str)
{
    int len = str.size();
    int mul = fact(len);
    int rank = 1, i;
 
    // All elements of count[] are initialized with 0
    int count[MAX_CHAR] = { 0 };
 
    // Populate the count array such that count[i]
    // contains count of characters which are present
    // in str and are smaller than i
    populateAndIncreaseCount(count, str);
 
    for (i = 0; i < len; ++i) {
        mul /= len - i;
 
        // Count number of chars smaller than str[i]
        // from str[i+1] to str[len-1]
        rank += count[str[i] - 1] * mul;
 
        // Reduce count of characters greater than str[i]
        updatecount(count, str[i]);
    }
 
    return rank;
}
 
// Driver code
int main()
{
    string str = "TRUELY";
   
    // Function call
    cout << findRank(str);
    return 0;
}
 
// This is code is contributed by rathbhupendra