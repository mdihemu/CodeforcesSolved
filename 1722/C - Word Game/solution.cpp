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
    int n;
    cin >> n;
    vector<string>f(n), s(n), t(n);
    map<string, int>tot;
    for(int i=0;i<n;i++){
        cin >> f[i];
        tot[f[i]] += 1;
    }
    for(int i=0;i<n;i++){
        cin >> s[i];
        tot[s[i]] += 1;
    }
    for(int i=0;i<n;i++){
        cin >> t[i];
        tot[t[i]] += 1;
    }
 
 
    int cnt1 = 0;
    for(int i=0;i<n;i++){
        if(tot[f[i]] == 1){
            cnt1 += 3;
        }
        else if(tot[f[i]] == 2){
            cnt1++;
        }
    }
 
    int cnt2 = 0;
    for(int i=0;i<n;i++){
        if(tot[s[i]] == 1){
            cnt2 += 3;
        }
        else if(tot[s[i]] == 2){
            cnt2++;
        }
    }
 
    int cnt3 = 0;
    for(int i=0;i<n;i++){
        if(tot[t[i]] == 1){
            cnt3 += 3;
        }
        else if(tot[t[i]] == 2){
            cnt3++;
        }
    }
 
    cout << cnt1 << ' ' << cnt2 << ' ' << cnt3 << endl;
}
 
///Must see the constraints range
///Calculate the Time