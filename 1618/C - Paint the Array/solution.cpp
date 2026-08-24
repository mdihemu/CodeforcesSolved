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
 
int GcdOfArray(vector<int>& arr, int idx)
{
    if (idx == arr.size() - 1) {
        return arr[idx];
    }
    int a = arr[idx];
    int b = GcdOfArray(arr, idx + 1);
    return __gcd(a, b);
}
 
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
    vector<int>even, odd;
    for(int i=0;i<n;i++){
        if(i%2){
            odd.push_back(a[i]);
        }
        else{
            even.push_back(a[i]);
        }
    }
    int o = GcdOfArray(even, 0);
    int oo = GcdOfArray(odd, 0);
    //cout << o << ' ' << oo << endl;
    if(o == oo){
        cout << 0 << endl;
        return;
    }
    if(o>1){
        bool ok = true;
        for(int i=0;i<odd.size();i++){
            if(odd[i]%o == 0){
                ok = false;
                break;
            }
        }
        if(ok){
            cout << o << endl;
            return;
        }
    }
    if(oo>1){
        bool ok = true;
        for(int i=0;i<even.size();i++){
            if(even[i]%oo == 0){
                ok = false;
                break;
            }
        }
        if(ok){
            cout << oo << endl;
            return;
        }
    }
    cout << 0 << endl;
}
 
///Must see the constraints range
///Calculate the Time