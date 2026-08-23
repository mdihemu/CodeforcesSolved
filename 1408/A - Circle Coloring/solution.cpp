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
    int _=1;
    cin >> _;
    while(_--) solve();
    return 0;
}
 
void solve()
{
    int n;
    cin >> n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> b[i];
    for(int i=0;i<n;i++)
        cin >> c[i];
    int ans[n];
    ans[0] = a[0];
    for(int i=1;i<n;i++){
        if(i<n-1){
            if(ans[i-1] != a[i])
                ans[i] = a[i];
            else
                ans[i] = b[i];
        }
        else{
            if(ans[i-1]!=a[i] && ans[0]!=a[i])
                ans[i] = a[i];
            else if(ans[i-1]!=b[i] && ans[0]!=b[i])
                ans[i] = b[i];
            else if(ans[i-1]!=c[i] && ans[0]!=c[i])
                ans[i] = c[i];
        }
    }
    for(int i=0;i<n;i++)
        cout << ans[i] << " ";
    cout << endl;
}