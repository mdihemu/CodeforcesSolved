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
    //cin >> _;
    while(_--) solve();
    return 0;
}
 
void solve()
{
    int n;
    cin >> n;
    int a[123456],b[123456];
    while(n--){
        int x;
        cin >> x;
        a[x]++;
        b[a[x]]++;
    }
    int q;
    cin >> q;
    while(q--){
        char c;
        int k;
        cin >> c >> k;
        if(c=='+'){
            a[k]++;
            b[a[k]]++;
        }
        else{
            b[a[k]]--;
            a[k]--;
        }
        if((b[2]>1 && b[6]>0) || (b[4]>1 ||(b[4]>0 && b[2]>2)) || (b[8]>0))
            cout << "YES
";
        else
            cout << "NO
";
    }
}