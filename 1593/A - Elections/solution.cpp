#include<bits/stdc++.h>
using namespace std;
 
#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "
"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)
 
const int MOD = 1e9+7;
const int INF = 2e5+5;
const int N = 205;
 
void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}
 
void solve()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    int mx = max(a[0], max(a[1], a[2]));
    if((a[0] == a[1]) && (a[1] == a[2])){
        cout << "1 1 1
";
        return;
    }
    if((a[0] == a[1] && a[0] > a[2])  || (a[0] == a[2] && a[0] > a[1])  || (a[2] == a[1] && a[2] > a[0]) ){
        for(int i=0;i<3;i++){
            if(mx == a[i]){
                cout << 1 << " ";
            }
            else{
                cout << mx - a[i] + 1 << " ";
            }
        }
        cout << endl;
        return;
    }
    for(int i=0;i<3;i++){
        if(mx == a[i]){
            cout << 0 << " ";
        }
        else{
            cout << mx - a[i] + 1 << " ";
        }
    }
    cout << endl;
}
 
///Must see the constraints range
///Calculate the Time