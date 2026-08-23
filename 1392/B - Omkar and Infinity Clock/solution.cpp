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
    int ma = INT_MIN;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        ma = max(ma,a[i]);
    }
    k = k%2;
    if(k==0)
        k+=2;
    for(int i=0;i<k;i++){
        int ma2 = INT_MIN;
        for(int i=0;i<n;i++){
            a[i] = ma - a[i];
            ma2 = max(ma2,a[i]);
        }
        ma = ma2;
    }
    for(int i=0;i<n;i++){
        if(i>0)
            cout << " ";
        cout << a[i];
    }
    cout << endl;
}