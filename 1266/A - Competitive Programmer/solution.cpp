#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "
"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void solve();
int32_t main()
{
    IOS;
    int _=1; cin >> _;
    while(_--) solve();
    return 0;
}
 
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int sum=0,even=0,zero=0;
    for(int i=0;i<n;i++){
        int a = s[i] - 48;
        sum += a;
        if(a%2==0)
            even++;
        if(a==0)
            zero++;
    }
    if(sum%3==0 && even>1 && zero>=1)
        cout << "red
";
    else
        cout << "cyan
";
}