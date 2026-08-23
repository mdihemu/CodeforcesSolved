#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "
"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
 
void solve();
int32_t main()
{
    IOS;
    int _=1; cin >> _;
    while(_--) solve();
    return 0;
}
 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum=0, res=0;
    map<int, int>mp;
    mp[0] = 1;
    for(int i=1;i<=n;i++){
        sum += s[i-1] - '0';
        res += mp[sum - i];
        mp[sum - i]++;
    }
    cout << res << endl;
}