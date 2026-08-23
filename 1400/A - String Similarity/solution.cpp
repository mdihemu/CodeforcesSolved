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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0,cntt=0;
    for(int i=0;i<2*n-1;i++){
        if(s[i] == '0')
            cnt++;
        else
            cntt++;
    }
    if(cnt>cntt)
        for(int i=0;i<n;i++)
            cout << '0';
    else{
        for(int i=0;i<n;i++)
            cout << '1';
    }
    cout << endl;
}