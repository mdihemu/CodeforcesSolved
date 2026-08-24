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
    int n = s.size();
    int m = n;
    bool ok = true;
    for(int i=0;i<n;i++){
        char ch = char(97+ m-1);
        if(s[0] == ch){
            s.erase(0,1);
            //cout << s << endl;
        }
        else if(s[s.size()-1] == ch){
            reverse(s.begin(), s.end());
            s.erase(0,1);
            //cout << s << endl;
        }
        else{
            ok = false;
            break;
        }
        m--;
    }
    if(ok){
        cout << "YES
";
    }
    else{
        cout << "NO
";
    }
}
 
///Must see the constraints range
///Calculate the Time