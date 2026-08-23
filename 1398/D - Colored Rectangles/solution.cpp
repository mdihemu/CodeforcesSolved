#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "
"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define N 205
 
int r[N],g[N],b[N],res[N][N][N];
 
int32_t main()
{
    IOS;
    int R,G,B;
    cin >> R >> G >> B;
 
    for(int i=1;i<=R;i++)
        cin >> r[i];
    sort(r+1, r+R+1);
 
    for(int i=1;i<=G;i++)
        cin >> g[i];
    sort(g+1, g+G+1);
 
    for(int i=1;i<=B;i++)
        cin >> b[i];
    sort(b+1, b+B+1);
 
    for(int i=0;i<=R;i++){
        for(int j=0;j<=G;j++){
            for(int k=0;k<=B;k++){
                if(i && j)
                    res[i][j][k] = max(res[i][j][k], res[i-1][j-1][k] + r[i]*g[j]);
                if(i && k)
                    res[i][j][k] = max(res[i][j][k], res[i-1][j][k-1] + r[i]*b[k]);
                if(j && k)
                    res[i][j][k] = max(res[i][j][k], res[i][j-1][k-1] + b[k]*g[j]);
            }
        }
    }
    cout << res[R][G][B] << endl;
    return 0;
}