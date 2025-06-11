#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        int temp = 0;
        for (int j = 0; j < 5; j++)
        {
            cin >> temp;
            if (temp == 1)
            {
                ans = abs(i- 2) + abs(j-2);
            }
        }
    }
    cout << ans << endl;
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