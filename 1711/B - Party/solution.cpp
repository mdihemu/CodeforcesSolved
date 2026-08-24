#include<bits/stdc++.h>
using namespace std;
 
#define     IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int              long long
#define     endl            "
"
#define     PI               acos(-1.0)
#define     IN              freopen("input.txt",'r',stdin)
 
const int MOD = 1e9+7;
const int INF = 1e5+5;
const int N = 205;
 
int BIGMOD(int b, int p)
{
    int ans = 1 % MOD, x = b % MOD;
    while(p){
        if(p&1)ans = (ans * x)%MOD;
        x = (x*x)%MOD;
        p >>= 1LL;
    }
    return ans;
}
 
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
    int n, m;
    cin >> n >> m;
    int a[INF];
    int freq[INF];
    memset(freq, 0, sizeof(freq));
    for(int i=1;i<=n;i++)
        cin >> a[i];
    vector<int>v;
    for(int i=0;i<m;i++){
        int x, y;
        cin >> x >> y;
        v.push_back(a[x] + a[y]);
        freq[x]++;
        freq[y]++;
    }
    for(int i=1;i<=n;i++){
        if(freq[i]%2){
            v.push_back(a[i]);
        }
    }
    sort(v.begin(), v.end());
    int ans = 0;
    if(m % 2){
        ans = v[0];
    }
 
    cout << ans << endl;
}
 
///Must see the constraints range
///Calculate the Time