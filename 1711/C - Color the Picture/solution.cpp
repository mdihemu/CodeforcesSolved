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
    int n, m, k;
    cin >> n >> m >> k;
    int a[k];
    for(int i=0;i<k;i++){
        cin >> a[i];
    }
 
    bool ok = false;
 
    for(int lol=0;lol<2;lol++){
        int mx = 0, cnt = 0;
        for(int i=0;i<k;i++){
            if(a[i] >= 2 * n){
                mx = max(mx, (a[i] / n));
                cnt += (a[i] / n);
            }
        }
        if(m%2 && mx>2 && cnt>=m)
            ok = true;
        else if(m%2==0 && cnt>=m){
            ok = true;
        }
        swap(n, m);
    }
    if(ok){
        cout << "Yes
";
    }
    else{
        cout << "No
";
    }
}
 
///Must see the constraints range
///Calculate the Time