#include<bits/stdc++.h>
using namespace std;
 
#define     IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int              long long
#define     endl            "
"
#define     PI               acos(-1.0)
#define     IN              freopen("input.txt",'r',stdin)
 
const int MOD = 1e9+7;
const int INF = 2e5+5;
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
    int n, l, r;
    cin >> n >> l >> r;
    bool ok = true;
    int a[n+1];
    for(int i=1;i<=n;i++){
        if((r/i) * i >= l){
            a[i] = (r/i)*i;
        }
        else{
            ok = false;
            break;
        }
    }
    if(ok){
        cout << "YES
";
        for(int i=1;i<=n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else{
        cout << "NO
";
    }
}
 
///Must see the constraints range
///Calculate the Time