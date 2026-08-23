#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "
"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
 
const int N = 1e6+5;
const int inf = 1e9+7;
 
void solve();
int32_t main()
{
    IOS;
    int _=1;
    cin >> _;
    while(_--) solve();
    return 0;
}
 
void solve()
{
    string s;
    cin >> s;
    int n = s.size(),x;
    cin >> x;
    string w;
    for(int i=0;i<n;i++)
        w+='1';
    for(int i=0;i<n;i++){
        if(s[i] == '0'){
            if(i-x>=0)
                w[i-x] = '0';
            if(i+x<=n)
                w[i+x] = '0';
        }
    }
    bool ok = true;
    for(int i=0;i<n;i++){
        bool a = true, b = true;
        if(s[i] == '1'){
            if(i-x<0)
                a = false;
            else if(w[i-x] == '0')
                a = false;
            if(i+x>=n)
                b = false;
            else if(w[i+x] == '0')
                b = false;
        }
        if(a==false && b==false)
            ok = false;
    }
    if(ok)
        cout << w << endl;
    else
        cout << -1 << endl;
}