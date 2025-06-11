#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n = 0, k = 0;
    cin >> n >> k;
    vector<pair<int, int>> days;
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        cin >> x;
        days.push_back(make_pair(x, i+1));
    }
    sort(days.begin(), days.end());
    int sum = 0;
    int i = 0;
    vector<int> ans;
    while (i < n)
    {
        sum += days[i].first;
        if (sum > k)
            break;
        ans.push_back(days[i].second);
        i++;
    }
    cout << ans.size() << endl;
    for (int it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    solve();

    return 0;
}