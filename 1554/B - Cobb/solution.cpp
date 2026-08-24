#include<bits/stdc++.h>
using namespace std;
 
#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "
"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)
 
const int MOD = 1e9+7;
const int INF = 2e5+5;
const int N = 205;
 
void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}
 
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin >> a[i];
    int cnt = -MOD;
    int l = max(1LL, n - 2*k);
    for(int i=l;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            cnt = max(cnt, i*j - k * (a[i] | a[j]));
        }
    }
    cout << cnt << endl;
}
 
///Must see the constraints range
///Calculate the Time