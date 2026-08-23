#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "
"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void solve();
int32_t main()
{
    IOS;
    int _=1; cin >> _;
    while(_--) solve();
    return 0;
}
 
void solve()
{
	int a[4];
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	int cnt=0;
	for(int i=0;i<4;i++){
        if(a[i]%2==0)
            cnt++;
	}
	if(cnt>=3){
        cout << "YES
";
        return;
	}
	if(a[0] && a[1] && a[2]){
        a[0]--;
        a[1]--;
        a[2]--;
        a[3]++;
        cnt = 0;
        for(int i=0;i<4;i++){
            if(a[i]%2==0)
                cnt++;
        }
        if(cnt>=3){
            cout << "YES
";
            return;
        }
	}
    cout << "NO
";
}