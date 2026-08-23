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
    string s;
    cin >> s;
    int cnt =0;
    vector<int>v;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            if(cnt != 0){
                v.push_back(cnt);
                cnt = 0;
            }
            else
                continue;
        }
        else
            cnt++;
    }
    v.push_back(cnt);
 
    cnt = 0;
    sort(v.rbegin(),v.rend());
    int a=0;
    for(auto i=v.begin();i!=v.end();i++){
        if(a==0){
            cnt += *i;
            a=1;
        }
        else
            a=0;
    }
    cout << cnt << endl;
}