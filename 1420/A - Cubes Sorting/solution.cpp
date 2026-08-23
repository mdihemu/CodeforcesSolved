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
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    bool ok = false;
    for(int i=1;i<n;i++){
        if(a[i] >= a[i-1]){
            ok = true;
            break;
        }
    }
    if(ok)
        cout << "YES
";
    else
        cout << "NO
";
}