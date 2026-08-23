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
 
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
 
    int n;
    cin >> n;
 
    int cnt = 0,a[n];
    for(int i=1;i<=n;i++){
        int m;
        cin >> a[i];
        cnt += a[i];
    }
    if(cnt%2==0)
        cnt /= 2 ;
    else{
        cnt /=2;
        cnt++;
    }
    //cout << cnt << endl;
 
    for(int i=1;i<=n;i++){
        if(a[i] >= cnt){
            cout << i << "
";
            break;
        }
        else{
            cnt -=a[i];
        }
    }
}