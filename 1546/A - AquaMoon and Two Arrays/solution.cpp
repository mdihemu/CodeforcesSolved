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
    int a[n], b[n];
    int suma = 0, sumb = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        suma += a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
        sumb += b[i];
    }
    if(suma != sumb){
        cout << "-1
";
        return;
    }
 
    vector< pair<int, int> > v;
 
    int i, j;
    for(i=0; i<n; i++){
        if(a[i] == b[i])
            continue;
        while(a[i]<b[i]){
            for(j=i+1; j<n;j++){
                if(a[j]>0 && a[j]>b[j]){
                    a[i]++;
                    a[j]--;
                    v.push_back({j, i});
                    break;
                }
            }
        }
        while(a[i]>b[i]){
            for(j=i+1; j<n;j++){
                if(a[j]<b[j]){
                    a[i]--;
                    a[j]++;
                    v.push_back({i, j});
                    break;
                }
            }
        }
    }
    cout << v.size() << endl;
    for(auto i:v){
        cout << i.first + 1 << " " << i.second + 1 << endl;
    }
}
 
///Must see the constraints range
///Calculate the Time