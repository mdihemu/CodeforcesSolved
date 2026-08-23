#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "
"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);
 
const int N = 1e3 + 5;
 
void solve();
void cf()
{
    int t; cin >> t; while(t--) solve();
}
int32_t main()
{
    IOS;
    cf();
    ///solve();
}
 
void solve()
{
    int n,d;
    cin >> n >> d;
    int a[N];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    while(d--){
        for(int i=2;i<=n;i++){
            if(a[i] > 0){
                a[i]--;
                a[i-1]++;
                break;
            }
        }
    }
    cout << a[1] << endl;
}