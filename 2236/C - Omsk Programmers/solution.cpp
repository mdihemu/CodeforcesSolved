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
    int a, b, x;
    cin >> a >> b >> x;
    int cnt = 0;
    vector<int>dif;
    dif.push_back(abs(a-b));
    while(!(a == b)){
        cnt++;
        if(b>a){
            swap(a, b);
        }
        if(a-b == 1){
            b++;
        }
        else{
            a /= x;
        }
        dif.push_back(abs(a-b));
    }
    int mn = cnt;
    for(int i=0;i<dif.size();i++){
        if(dif[i] + i < mn){
            mn = dif[i] + i;
        }
    }
    cout << mn << endl;
}
 
///Must see the constraints range
///Calculate the Time
 