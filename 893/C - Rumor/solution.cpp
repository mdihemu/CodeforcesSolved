#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "
"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);
 
const int N = 2e5 + 5;
 
int visited[100005] = {0};
int a[100005];
vector<int>adj[100005];
int MIN = 1e15;
 
void dfs(int node)
{
    if(visited[node] == 1)
        return;
    visited[node] = 1;
    MIN = min(MIN,a[node]);
    for(int i=0;i<adj[node].size();i++)
        dfs(adj[node][i]);
}
 
int32_t main()
{
    IOS;
    //IN;
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++)
        cin >> a[i];
    for(int i=1;i<=m;i++){
        int x,y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    int cnt = 0;
    for(int i=1;i<=n;i++){
        if(visited[i] == 0){
            MIN = 1e15;
            dfs(i);
            cnt += MIN;
        }
    }
    cout << cnt << endl;
}
 