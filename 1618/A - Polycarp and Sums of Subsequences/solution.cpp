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
    int a[10];
    int n = 7;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int mx = a[6];
    bool ok = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i] + a[j] + a[k] == mx){
                    cout << a[i] << ' ' << a[j] << ' ' << a[k] << endl;
                    ok = true;
                    break;
                }
            }
            if(ok)
                break;
        }
        if(ok)
            break;
    }
}
 
///Must see the constraints range
///Calculate the Time