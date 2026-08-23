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
    int n,k;
    cin >> n >> k;
    int cnt = 0;
    if(n==0)
        cnt = k;
    else if(k==0){
        if(n%2==0)
            cnt = 0;
        else
            cnt = 1;
    }
    else{
        if(n<k){
            cnt  = k-n;
        }
        else if(n==k)
            cnt = 0;
        else{
            int cn = abs(n-k);
            if(cn%2==0)
                cnt = 0;
            else
                cnt = 1;
        }
 
    }
    cout << cnt << endl;
}