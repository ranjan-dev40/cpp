#include <bits/stdc++.h>
using namespace std;
int hamming_distance(string s1, string s2)
{
    int n1 = s1.size();
    int n2 = s2.size();
    if (n1 != n2)
    {
        cout << "Enter both strings of equal size" << endl;
        return -1;
    }
    int count = 0;
    for (int i = 0; i < n1; i++)
    {
        if (s1[i] != s2[i])
        {
            count = count + 1;
        }
    }
    return count;
}
void hamming_code(string s1)
{
    int n = s1.size();
    int r = 1;

    while (pow(2, r) < n + r + 1)
    {
        r++;
    }
    cout << "value of r is : " << r << endl;
    int total_bits = n + r;
    int strR[r];
    int cw[n + r + 1];
    int temp_inc = 0;
    int temp_inc_str = 0;
    for (int i = 1; i <= n + r; i++)
    {
        if (i == pow(2, temp_inc))
        {
            cw[i] = -1;
            temp_inc++;
        }
        else
        {
            cw[i] = s1[n - 1 - temp_inc_str] - 48;
            temp_inc_str++;
        }
        cout << cw[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < r; i++)
    {
        int bit = pow(2, i);
        int count = 0;
        for (int j = 0; j <= total_bits; j++)
        {
            int temp = bit & j;
            if (bit == temp && cw[j] == 1)
            {
                count = count + 1;
            }
        }
        cout << "value of count is :" << count << endl;
        if (count % 2 == 0)
        {
            strR[i] = 0;
        }
        else
        {
            strR[i] = 1;
        }
    }
    for (int i = 0; i < r; i++)
    {
        cout << "r" << pow(2, i) << " is: " << strR[i] << " " << endl;
        ;
        int index = pow(2, i) - 1;
        cw[index] = strR[i];
    }
    cout << "Code word is as follows : " << endl;
    for (int i = 1; i < n + r + 1; i++)
    {
        cout << cw[i] << " ";
    }
    cout << endl;
}
int main()
{
    string s1, s2;
    cout << "Enter first string" << endl;
    cin >> s1;
    cout << "Enter second string" << endl;
    cin >> s2;
    int distance = hamming_distance(s1, s2);
    cout << "Hamming distance is : " << distance << endl;
    hamming_code(s1);
    return 0;
}