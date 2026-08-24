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
    reverse(s.begin(), s.end());
 
    int zero = LLONG_MAX, cnt = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '0')
            cnt++;
        if(cnt>1){
            zero = i-1;
            break;
        }
    }
 
    bool ok = false;
    int twentyfive = LLONG_MAX;
    for(int i=0;i<n;i++){
        if(s[i] == '5'){
            ok = true;
        }
        else if(ok && s[i] == '2'){
            twentyfive = i-1;
            break;
        }
    }
 
    ok = false;
    int fifty = LLONG_MAX;
    for(int i=0;i<n;i++){
        if(s[i] == '0'){
            ok = true;
        }
        else if(ok && s[i] == '5'){
            fifty = i-1;
            break;
        }
    }
 
    ok = false;
    int seventyfive = LLONG_MAX;
    for(int i=0;i<n;i++){
        if(s[i] == '5'){
            ok = true;
        }
        else if(ok && s[i] == '7'){
            seventyfive = i-1;
            break;
        }
    }
 
    int mn = min(zero, min(twentyfive, min(seventyfive, fifty)));
    if(mn > 100000){
        mn = 0;
    }
    //cout << zero << endl;
    cout << mn << endl;
}
 
///Must see the constraints range
///Calculate the Time