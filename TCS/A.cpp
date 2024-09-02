#include <bits/stdc++.h>
using namespace std;

map<int, string> mp{
    {0, "zero"},
    {1, "one"},
    {2, "two"},
    {3, "three"},
    {4, "four"},
    {5, "five"},
    {6, "six"},
    {7, "seven"},
    {8, "eight"},
    {9, "nine"},
    {10, "ten"},
    {11, "eleven"},
    {12, "twelve"},
    {13, "thirteen"},
    {14, "fourteen"},
    {15, "fifteen"},
    {16, "sixteen"},
    {17, "seventeen"},
    {18, "eighteen"},
    {19, "nineteen"},
    {20, "twenty"},
    {30, "thirty"},
    {40, "forty"},
    {50, "fifty"},
    {60, "sixty"},
    {70, "seventy"},
    {80, "eighty"},
    {90, "ninety"},
    {21, "twenty-one"},
    {22, "twenty-two"},
    {23, "twenty-three"},
    {24, "twenty-four"},
    {25, "twenty-five"},
    {26, "twenty-six"},
    {27, "twenty-seven"},
    {28, "twenty-eight"},
    {29, "twenty-nine"},
    {31, "thirty-one"},
    {32, "thirty-two"},
    {33, "thirty-three"},
    {34, "thirty-four"},
    {35, "thirty-five"},
    {36, "thirty-six"},
    {37, "thirty-seven"},
    {38, "thirty-eight"},
    {39, "thirty-nine"},
    {41, "forty-one"},
    {42, "forty-two"},
    {43, "forty-three"},
    {44, "forty-four"},
    {45, "forty-five"},
    {46, "forty-six"},
    {47, "forty-seven"},
    {48, "forty-eight"},
    {49, "forty-nine"},
    {51, "fifty-one"},
    {52, "fifty-two"},
    {53, "fifty-three"},
    {54, "fifty-four"},
    {55, "fifty-five"},
    {56, "fifty-six"},
    {57, "fifty-seven"},
    {58, "fifty-eight"},
    {59, "fifty-nine"},
    {61, "sixty-one"},
    {62, "sixty-two"},
    {63, "sixty-three"},
    {64, "sixty-four"},
    {65, "sixty-five"},
    {66, "sixty-six"},
    {67, "sixty-seven"},
    {68, "sixty-eight"},
    {69, "sixty-nine"},
    {71, "seventy-one"},
    {72, "seventy-two"},
    {73, "seventy-three"},
    {74, "seventy-four"},
    {75, "seventy-five"},
    {76, "seventy-six"},
    {77, "seventy-seven"},
    {78, "seventy-eight"},
    {79, "seventy-nine"},
    {81, "eighty-one"},
    {82, "eighty-two"},
    {83, "eighty-three"},
    {84, "eighty-four"},
    {85, "eighty-five"},
    {86, "eighty-six"},
    {87, "eighty-seven"},
    {88, "eighty-eight"},
    {89, "eighty-nine"},
    {91, "ninety-one"},
    {92, "ninety-two"},
    {93, "ninety-three"},
    {94, "ninety-four"},
    {95, "ninety-five"},
    {96, "ninety-six"},
    {97, "ninety-seven"},
    {98, "ninety-eight"},
    {99, "ninety-nine"}};

int reduceToOneDigit(int n)
{
    if (n < 10)
        return n;
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return reduceToOneDigit(sum);
}

bool isValidNum(string &s)
{
    bool flagDot = false;
    int i = 0;
    if (s[0] == '-' && s.size() == 1)
        return false;
    if (s[0] == '-')
        i++;
    for (; i < (int)s.size(); i++)
    {
        char ch = s[i];
        if (!((ch >= '0' && ch <= '9') || ch == '.'))
            return false;
        if (ch == '.')
        {
            if (flagDot)
                return false;
            flagDot = true;
        }
    }

    return true;
}

bool isValidName(string &s)
{
    for (auto ch : s)
    {
        if (!(ch >= 'a' && ch <= 'z'))
            return false;
    }

    return true;
}

void solve(int t, int T)
{

    string s1, s2;
    cin >> s1 >> s2;
    bool flag = false;

    if (!isValidNum(s1) || !isValidName(s2))
    {
        cout << "Invalid";
        if (t != T)
            cout << endl;
        return;
    }

    int num1 = 0, num2 = 0, exp = 0;
    int i = 0;
    flag = false;
    bool neg = s1[0] == '-';
    if (neg)
        i++;
    while (i < (int)s1.size())
    {
        if (s1[i] == '0' || s1[i] == '.')
        {
            flag |= (s1[i] == '.');
            i++;
        }
        else
        {
            num1 = s1[i++] - '0';
            break;
        }
    }

    int sum = 0;
    while (i < (int)s1.size())
    {
        if (s1[i] == '.')
        {
            i++;
        }
        else
            sum += s1[i++] - '0';
    }

    num2 = reduceToOneDigit(sum);

    if (flag)
    {
        bool flag2 = false;
        int i = 0;
        if (neg)
            i++;
        for (; i < int(s1.size()); i++)
        {
            char ch = s1[i];
            if (flag2)
            {
                exp++;
                if (ch != '0')
                    break;
            }
            if (ch == '.')
                flag2 = true;
        }
    }
    else
    {
        bool flag2 = false;
        int i = 0;
        if (neg)
            i++;
        for (; i < int(s1.size()); i++)
        {
            char ch = s1[i];
            if (ch == '.')
                break;
            if (flag2)
                exp++;
            if (ch != '0')
                flag2 = true;
        }
    }

    string name = "";

    int exp_red = reduceToOneDigit(exp);
    bool odd = false;
    if (exp_red % 2 == 1)
        odd = true;

    for (int i = 0; i < (int)s2.size(); i++)
    {
        if (i % 2 == 0 && odd)
        {
            name += s2[i];
        }
        else if (i % 2 == 1 && !odd)
        {
            name += s2[i];
        }
    }

    if (num1 == 0)
        exp = 0;

    string ans = neg && num1 != 0 ? "-" : "";
    ans += mp[num1].substr(0, 3);
    ans += '.';
    ans += mp[num2].substr(0, 3);
    ans += 'e';
    if (exp != 0)
        ans += flag ? '-' : '+';
    ans += mp[exp].substr(0, 3);
    ans += '@';
    ans += name;

    cout << ans;
    if (t != T)
        cout << endl;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    // 	freopen("stacking.in", "r", stdin);
    // 	freopen("stacking.out", "w", stdout);
    // #endif
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int T = 1;
    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        // cout << "Case #" << t << ": ";
        solve(t, T);
        // #ifndef ONLINE_JUDGE
        // cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
        // #endif
    }
}