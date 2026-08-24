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
 
    int i = n-1;
    for(int j = m-1; j>=0;j--){
        while(i>=0 && s[i] != t[j]){
            i -= 2;
        }
        if(i<0){
            cout << "NO
";
            return;
        }
        i--;
    }
    cout << "YES
";
}
 
///Must see the constraints range
///Calculate the Time