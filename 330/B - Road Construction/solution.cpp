/*
Author: DarkMotion
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll n,m;
    cin >> n >> m;
    int a[100001]={0};
    int i;
    /*
    for(int i = 1;i<=n;i++)
        cout << a[i] << " ";
    cout << endl;
    */
    while(m--){
        int x,y;
        cin >> x >> y;
        a[x] = -500;
        a[y] = -500;
    }
    /*
    for(int i = 1;i<=n;i++)
        cout << a[i] << " ";
    cout << endl;*/
    int cnt = 0;
    for(int i = 1;i<=n;i++){
        if(a[i] == 0){
            cnt = i;
            break;
        }
 
    }
    cout << n-1 << "
";
    for(i = 1;i<=n;i++){
        if(cnt == i)
            continue;
        else{
            cout << cnt << " " << i << endl;
        }
    }
}
 