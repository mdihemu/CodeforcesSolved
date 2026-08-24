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
    //IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}
 
void solve()
{
    int n, k;
    cin >> n >> k;
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    if(k == 1){
        cout << n-1 << endl;
        return;
    }
    //n-=1;
    vector<int>v;
    int temp = 1;
    int sum = 1;
    int cnt = 0;
    int i=0;
    for(i=1;i<=60;i++){
        temp *= 2;
        if(temp >= k){
            cnt = temp;
            break;
        }
        sum += temp;
        if(sum >= n){
            cout << i+1 << endl;
            //cout << "in" << endl;
            return;
        }
    }
    //cout << cnt << endl;
    int baki = n - cnt;
    baki = (baki + k - 1) / k;
 
    cout << baki + i << endl;
}
 
///Must see the constraints range
///Calculate the Time