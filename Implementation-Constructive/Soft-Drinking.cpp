#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int arr[8] = {0};
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }
    int mini = min(arr[4] * arr[3], min((arr[1] * arr[2]) / arr[6], (arr[5]) / arr[7]));
    cout << mini / arr[0] << endl;
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