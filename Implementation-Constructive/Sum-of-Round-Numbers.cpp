#include<bits/stdc++.h>
#define int long long
using namespace std;

// void solve(){
//     string str = "" ;
//     cin>>str ;
//     int cnt = 0 ;
//     for(char ch : str){
//         if(ch != '0')cnt++ ;
//     }
//     cout<<cnt<<endl;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if(str[i] == '0')continue ;
//         cout<<str[i] ;
//         for(int j = i+1 ; j<str.length() ;j++){
//             cout<<'0' ;
//         }
//         cout<<" ";
//     }
//     cout<<endl;
    
// }


void solve(){
    int n = 0 ;
    cin>>n ; 
    string str = to_string(n) ;
    int len = str.length() ;
    int mul = 1 ;
    int cnt = 0 ;
    for (char ch : str)
    {
        if(ch != '0')cnt++ ;
    }
    cout<<cnt<<endl;
    
    while (len)
    {
        mul *= 10 ;
        if(n%mul){
            cout<<n%mul<<" ";
            n -= n%mul ;
        }
        len-- ;
    }
    cout<<endl;
    return ;
    
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t_case = -1;
    cin>>t_case ;
    while(t_case--){
        solve();
    }
    return 0;
}