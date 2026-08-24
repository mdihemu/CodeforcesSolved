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
    int W, H;
    cin >> W >> H;
    int x, xx, y, yy;
    cin >> x >> y >> xx >> yy;
    int w, h;
    cin >> w >> h;
    int a = xx-x, b = yy-y;
    if(w+a>W && h+b>H){
        cout << -1 << endl;
        return;
    }
    int mn = INT_MAX;
    if(h+b <= H){
        mn = min(mn, min(yy - (H-h), h-y));
    }
    if(w+a <= W){
        mn = min(mn, min(xx - (W-w), w-x));
    }
    if(mn<0)
        mn = 0;
    cout << mn << endl;
}
 
///Must see the constraints range
///Calculate the Time