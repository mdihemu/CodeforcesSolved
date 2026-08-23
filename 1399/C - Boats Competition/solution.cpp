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
    int n;
    cin >> n;
    vector<int>v(n+1);
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v[x]++;
    }
 
    int cnt = 0;
    for(int s=2;s<=2*n;s++){
        int ok = 0;
        for(int i=1;i<(s+1)/2;i++){
            if(s-i>n)
                continue;
            ok += min(v[i],v[s-i]);
        }
        if(s%2==0)
            ok += v[s/2] / 2;
        cnt = max(cnt,ok);
    }
    cout << cnt << endl;
}