#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int s{};
    int sum1{};
    int sum2{};
    int input;
    cin >> s;
    vector<vector<int>> vec1{};
    for (int i = 0; i < s; i++)
    {
        vector<int> temp;
        for (int j = 0; j < s; j++)
        {
            cin >> input;
            temp.push_back(input);
        }
        vec1.push_back(temp);
    }
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (i == j)
            {
                sum1 = sum1 + vec1.at(i).at(j);
            }
            if (i == s - j - 1)
            {
                sum2 = sum2 + vec1.at(i).at(j);
            }
        }
    }
   
    cout << abs(sum1 - sum2);
}
