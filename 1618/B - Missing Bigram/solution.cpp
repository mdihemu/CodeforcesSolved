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
    vector<string>v;
    for(int i=0;i<n-2;i++){
        string tt;
        cin >> tt;
        v.push_back(tt);
    }
    string s = "";
    for(int i=0;i<n-2;i++){
        string t = v[i];
        if(i == 0){
            s += t[0];
            s += t[1];
        }
        else{
            string lol = " ";
            lol += s[s.size()-2];
            lol += s[s.size()-1];
            if(lol == t){
                continue;
            }
            if(s[s.size()-1] == t[0]){
                s += t[1];
            }
            else{
                s += t[0];
                s += t[1];
            }
        }
    }
    while(s.size() < n){
        s += 'a';
    }
    cout << s << endl;
}
 
///Must see the constraints range
///Calculate the Time