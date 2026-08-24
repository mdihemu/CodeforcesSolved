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
    int n;
    cin >> n;
    if(n==1){
        cout << 'a' << endl;
        return;
    }
    string s = "";
    int m = n;
    if(n%2)
        m -= 1;
    for(int i=0;i<m/2-1;i++)
        s += 'a';
    s += 'b';
    for(int i=0;i<m/2;i++)
        s += 'a';
    if(m!=n)
        s += 'c';
    cout << s << endl;
}
 
///Must see the constraints range
///Calculate the Time