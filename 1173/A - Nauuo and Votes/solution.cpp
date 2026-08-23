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
    int x,y,z;
    cin >> x >> y >> z;
    if((x+z)==(y+z) && z==0)
        cout << 0 << endl;
    else if(x>y+z)
        cout << "+
";
    else if(x+z<y)
        cout << "-
";
    else
        cout << "?
";
    return 0;
}