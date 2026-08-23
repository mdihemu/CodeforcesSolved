#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "
"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
 
const int N = 1e6+5;
const int inf = 1e9+7;
 
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int>ans(n);
    vector<int>pos0,pos1;
    for(int i=0;i<n;i++){
        int temp = pos0.size() + pos1.size();
        if(s[i] == '0'){
            if(pos1.empty())
                pos0.push_back(temp);
            else{
                temp = pos1.back();
                pos1.pop_back();
                pos0.push_back(temp);
            }
        }
        else{
            if(pos0.empty())
                pos1.push_back(temp);
            else{
                temp = pos0.back();
                pos0.pop_back();
                pos1.push_back(temp);
            }
        }
        ans[i] = temp;
    }
 
    cout << pos0.size() + pos1.size() << endl;
    for(auto i : ans)
        cout << i+1 << " ";
    cout << endl;
}