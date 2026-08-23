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
    int n;
    cin >> n;
    int cnt = 1;
    for(int i=1;i<=n;i++){
        cnt += (i-1)*4;
    }
    cout << cnt << endl;
    return 0;
}