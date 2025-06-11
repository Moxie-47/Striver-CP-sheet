#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    string s = "" ;
    cin>>s ;
    int ptr = 0 ; 
    for(char ch : s){
        int temp = ch-'0' ;
        cout<<(ptr == 0 && temp == 9 ? 9 : min(temp , 9-temp)) ;
        ptr++;
    }
    return;
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