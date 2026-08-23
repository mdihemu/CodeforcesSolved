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
    int n,k;
    cin >> n >> k;
    int cnt=0;
    while(n!=0){
        if(n%k==0){
            n/=k;
            cnt++;
        }
        else{
            int rem = n%k;
            cnt += rem;
            n -= rem;
        }
    }
    cout << cnt << endl;
}