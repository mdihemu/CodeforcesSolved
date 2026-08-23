#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "
"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
 
const int N = 1e6+5;
const int inf = 1e9+7;
 
void solve();
int32_t main()
{
    IOS;
    int _=1;
    cin >> _;
    while(_--) solve();
    return 0;
}
 
 
void solve()
{
    int a,aa,aaa,b,bb,bbb;
    cin >> a >> aa >> aaa;
    cin >> b >> bb >> bbb;
 
    int mn = min(aaa,bb);
    int cnt = mn;
    bb -= mn;
 
    mn = max((int)0, aa-b-bb);
    cnt -= mn;
    cout << 2*cnt << endl;
}