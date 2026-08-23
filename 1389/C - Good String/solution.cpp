#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "
"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
 
const int N = 1e6+5;
const int inf = 1e9+7;
 
int solvee(string s,int x, int y);
void solve();
int32_t main()
{
    IOS;
    int _=1;
    cin >> _;
    while(_--) solve();
    return 0;
}
 
void solve()
{
    string s;
    cin >> s;
    int mx = 0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            mx = max(mx,solvee(s,i,j));
        }
    }
    cout << s.size()- mx << endl;
}
 
int solvee(string s, int x, int y)
{
    int cnt = 0;
    for(auto ch:s){
        if(ch-'0' == x){
            cnt++;
            swap(x,y);
        }
    }
    if(x!=y && cnt%2==1)
        cnt--;
    return cnt;
}