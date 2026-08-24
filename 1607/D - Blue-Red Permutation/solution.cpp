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
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    string s;
    cin >> s;
    vector<int>b,r;
    for(int i=0;i<n;i++){
        if(s[i] == 'B'){
            b.push_back(a[i]);
        }
        else{
            r.push_back(a[i]);
        }
    }
    sort(b.begin(), b.end());
    sort(r.begin(), r.end());
 
    bool ok = true;
    int k = 1;
    for(int i=0;i<b.size();i++){
        if(b[i] >= k){
            k++;
        }
        else{
            ok = false;
            break;
        }
    }
    for(int i=0;i<r.size();i++){
        if(r[i] <= k){
            k++;
        }
        else{
            ok = false;
            break;
        }
    }
    if(ok){
        cout << "YES
";
    }
    else{
        cout << "NO
";
    }
}
 
///Must see the constraints range
///Calculate the Time