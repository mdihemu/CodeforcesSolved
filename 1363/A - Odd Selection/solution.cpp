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
    //cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int even = 0,odd=0;
        for(int i=0;i<n;i++){
            int e;
            cin >> e;
            if(e%2!=0)
                odd++;
        }
        even = n - odd;
 
        if(odd>0 && even >0 && x<n)
            cout << "Yes
";
        else if(x==n && odd%2==1)
            cout << "Yes
";
        else if(x%2==1 && even==0)
            cout << "Yes
";
        else
            cout << "No
";
    }
}