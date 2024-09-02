#include <bits/stdc++.h>
using namespace std;

void solve(int t)
{
    vector<int> weights;
    int k{0};

    string line;

    getline(cin, line);
    line += ' ';

    string temp = "";
    for (int i = 0; i < (int)line.size(); i++)
    {
        if (line[i] == ' ')
        {
            if(!temp.empty() && stoi(temp) != 0)
            weights.push_back(stoi(temp));
            temp = "";
        }
        else
            temp += line[i];
    }

    cin >> k;

    sort(weights.begin(), weights.end());
    int l = 0, r = (int)weights.size() - 1;
    int ans{0};
    while (l <= r)
    {
        if (weights[l] + weights[r] <= k)
            l++;
        r--;
        ans++;
    }
    cout << ans;
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
    // cin >> T;

    for (int t = 1; t <= T; t++)
    {
        // cout << "Case #" << t << ": ";
        solve(t);
        // #ifndef ONLINE_JUDGE
        // cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
        // #endif
    }
}