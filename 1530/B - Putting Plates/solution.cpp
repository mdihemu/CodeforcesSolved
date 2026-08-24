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
const int N = 25;
 
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
    int a[N][N];
    memset(a, 0, sizeof(a));
 
    a[1][1] = a[1][m] = a[n][1] = a[n][m] = 1;
 
    for(int j=3; j+1<m; j+=2)
        a[1][j] = a[n][j] = 1;
    for(int j=3; j+1<n; j+=2)
        a[j][1] = a[j][m] = 1;
 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
}
 
///Must see the constraints range
///Calculate the Time