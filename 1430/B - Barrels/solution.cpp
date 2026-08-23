#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "
"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void solve();
int32_t main()
{
    IOS;
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}
 
void solve()
{
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(auto &it : a)
        cin >> it;
    sort(a.rbegin(),a.rend());
    int cnt = 0;
    for(int i=0;i<=k;i++)
        cnt += a[i];
    cout << cnt << endl;
}