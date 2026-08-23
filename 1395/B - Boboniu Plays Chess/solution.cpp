#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "
"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
 
void solve();
int32_t main()
{
    IOS;
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    cout << x << " " << y << endl;
    for(int i=y+1;i<=m;i++)
        cout << x << " " << i << endl;
    for(int i=y-1;i>=1;i--)
        cout << x << " " << i << endl;
    int cnt = 0;
    for(int i=1;i<=n;i++){
        if(i==x)
            continue;
        if(cnt == 0){
            for(int j=1;j<=m;j++)
                cout << i << " " << j << endl;
            cnt = 1;
        }
        else{
            for(int j=m;j>=1;j--)
                cout << i << " " << j << endl;
            cnt = 0;
        }
    }
    return 0;
}