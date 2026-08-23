#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "
"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
 
const int N = 1e6+5;
const int inf = 1e9+7;
 
int fact[N];
 
void solve();
int32_t main()
{
    IOS;
    int _=1;
    //cin >> _;
    while(_--) solve();
    return 0;
}
 
void solve()
{
    fact[0] = 1;
    for(int i=1;i<N;i++)
        fact[i] = (fact[i-1]*i) % inf;
 
    int n;
    cin >> n;
 
    int ans = 1;
    for(int i=1;i<n;i++)
        ans = (ans*2)%inf;
 
    ans = (fact[n]-ans)%inf;
    ans = (ans+inf)%inf;
 
    cout << ans << endl;
}