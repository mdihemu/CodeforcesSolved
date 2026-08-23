#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "
"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);
 
const int N = 2e5 + 5;
 
void solve();
int32_t main()
{
    IOS;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
 
void solve()
{
    int n;
    cin >> n;
    if(n==1)
        cout << -1 << endl;
    else{
        cout << 2 ;
        for(int i=1;i<n;i++)
            cout << 3;
        cout << endl;
    }
}
 