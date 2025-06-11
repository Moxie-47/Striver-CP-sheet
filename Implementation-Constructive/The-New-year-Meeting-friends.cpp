#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int x = 0, y = 0, z = 0;
    cin >> x >> y >> z;
    cout << min(abs(x - y)+abs(y-z), min(abs(x - y)+abs(x-z) , abs(x - z)+abs(y-z))) << endl;
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