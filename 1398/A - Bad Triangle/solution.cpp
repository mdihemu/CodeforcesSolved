#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "
"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define N 5e4+1;
 
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
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int x = a[0];
    int y = a[n-1];
    int z = a[1];
 
    if(x+z<=y)
        cout << "1 2 "<< n << endl;
    else
        cout << -1 << endl;
}