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
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
 
    s = "*" + s;
    t = "*" + t;
 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i && j<=m; j++){
            if(m-j >= i)
                continue;
            string lol = s.substr(i-j+1, j);
            string lol2 = s.substr(i - (m - j), m - j);
            reverse(lol2.begin(), lol2.end());
            if("*" + lol + lol2 == t){
                cout << "YES
";
                return;
            }
        }
    }
    cout << "NO
";
}
 
///Must see the constraints range
///Calculate the Time