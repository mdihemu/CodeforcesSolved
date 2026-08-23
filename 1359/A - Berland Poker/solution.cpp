#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
#define endl '
'
#define pb push_back
#define s 10010
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        int cnt = 0,j=0;
        int play = n/k;
        if(m<=play)
            cnt = m;
        else{
            j = m - play;
            k--;
            if(j%k==0){
                cnt = j/k;
                cnt = play - cnt;
            }
            else{
                cnt = j/k;
                cnt = play - cnt - 1;
            }
        }
        cout << cnt << endl;
    }
}
 