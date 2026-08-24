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
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
 
    sort(a, a+n);
 
    ///Method-1
    int cnt = 0;
    for(int i=k;i<n-k;i++){
        cnt += a[i];
    }
    //cout << cnt << endl;
    for(int i=0;i<k;i++){
        cnt += (a[i] / a[n-i-1]);
        //cout << cnt << endl;
    }
    //cout << cnt << endl;
 
    ///Method-2
    int cntt = 0;
    for(int i=0;i<n-k-k;i++){
        cntt += a[i];
    }
    //cout << cntt << endl;
    for(int i=n-k-k;i<n-k;i++){
        cntt += (a[i] / a[k+i]);
    }
    //cout << cntt << endl;
 
 
    int mn = min(cnt, cntt);
    cout << mn << endl;
}
 
///Must see the constraints range
///Calculate the Time