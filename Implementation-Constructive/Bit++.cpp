#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int x = 0;
    int n = 0;
    cin >> n;

    while (n--)
    {
        string temp = "";
        cin >> temp;

        if (temp[1] == '+')
        {
            x++;
        }
        else {
            x--;
        }
    }

    cout << x << endl;
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