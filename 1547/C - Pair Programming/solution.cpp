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
    int k, n, m;
    cin >> k >> n >> m;
    int a[110], b[110];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<m;i++)
        cin >> b[i];
    bool ok = true;
    int i = 0, j=0;
    vector<int>v;
    while(i<n && j<m){
        if(a[i]<b[j]){
            if(a[i]<=k){
                v.push_back(a[i]);
                if(a[i]==0)
                    k++;
                i++;
            }
            else{
                ok = false;
                break;
            }
        }
        else{
            if(b[j]<=k){
                v.push_back(b[j]);
                if(b[j] == 0)
                    k++;
                j++;
            }
            else{
                ok = false;
                break;
            }
        }
        if(i>n && j>m)
            break;
    }
    if(ok){
        while(i<n){
            if(a[i]<=k){
                v.push_back(a[i]);
                if(a[i] == 0)
                    k++;
                i++;
            }
            else{
                ok = false;
                break;
            }
        }
    }
    if(ok){
        while(j<m){
            if(b[j]<=k){
                v.push_back(b[j]);
                if(b[j] == 0)
                    k++;
                j++;
            }
            else{
                ok = false;
                break;
            }
        }
    }
    //cout << v.size() << endl;
    if(ok){
        for(int i:v){
            cout << i << " ";
        }
        cout << endl;
    }
    else{
 
        cout << "-1
";
    }
    v.clear();
}
 
///Must see the constraints range
///Calculate the Time