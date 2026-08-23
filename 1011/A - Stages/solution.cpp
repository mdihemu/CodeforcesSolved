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
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    char prev = 'a' - 2;
    int ans=0, cnt=0;
    for(int i=0;i<n;i++){
        if(s[i] >= prev + 2){
            prev = s[i];
            ans += s[i] - 'a' + 1;
            cnt++;
            if(cnt >= k){
                cout << ans << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}