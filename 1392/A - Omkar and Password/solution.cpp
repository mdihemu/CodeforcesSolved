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
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int cnt=0;
    for(int i=0;i<n-1;i++){
        if(a[i] == a[i+1]){
            cnt++;
        }
    }
    if(cnt == n-1)
        cnt = n;
    else
        cnt = 1;
    cout << cnt << endl;
}