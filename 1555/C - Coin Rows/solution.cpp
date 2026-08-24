#include<bits/stdc++.h>
using namespace std;
 
#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "
"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)
 
const int MOD = 1e9+7;
const int INF = 1e5+5;
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
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> b[i];
 
    int p[INF]={0}, s[INF] = {0};
 
    for(int i=n-1;i>=0;i--){
        s[i] = s[i+1] + a[i];
    }
    for(int i=0;i<n;i++){
        p[i+1] = p[i] + b[i];
    }
    int mn = INT_MAX;
    for(int i=0;i<n;i++){
        mn = min(mn, max(s[i+1],p[i]));
    }
    cout << mn << endl;
}
///Must see the constraints range
///Calculate the Time