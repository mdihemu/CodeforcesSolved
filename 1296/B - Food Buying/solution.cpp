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
    int t=1; cin >> t;
    while(t--) solve();
    return 0;
}
 
void solve()
{
    int n;
    cin >> n;
    int cnt=0;
 
    while(n>=10){
        int div = n/10;
        cnt += 10*div;
        n %= 10;
        n += div;
    }
 
    cnt += n;
    cout << cnt << endl;
}