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
    string s;
    cin >> s;
    int a[30] = {0};
    for(int i=0;i<s.size();i++){
        a[(s[i] - 'a')]++;
    }
 
    sort(a, a+26);
    int cnt = 0, cnt1 = 0;
    for(int i=0;i<26;i++){
        if(a[i] == 1)
            cnt1++;
        else if(a[i]>1)
            cnt++;
    }
    cout << cnt + (cnt1)/2 << endl;
}
 
///Must see the constraints range
///Calculate the Time