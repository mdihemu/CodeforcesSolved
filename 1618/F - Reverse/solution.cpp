#include<bits/stdc++.h>
using namespace std;
 
#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "
"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)
 
const int MOD = 1e9+7;
const int INF = 2e5+5;
const int N = 205;
 
string decToBin(int n)
{
    string s = "";
    while(n!=0){
        s += (n&1) + '0';
        n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
 
void isOk(string s, string t)
{
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            string a(i, '1'), b(j,'1');
            if(a + s + b == t){
                cout << "YES
";
                exit(0);
            }
        }
    }
 
    reverse(s.begin(), s.end());
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            string a(i, '1'), b(j,'1');
            if(a + s + b == t){
                cout << "YES
";
                exit(0);
            }
        }
    }
}
 
void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}
 
void solve()
{
    int x, y;
    cin >> x >> y;
    if(x == y){
        cout << "YES
";
        return;
    }
    string s = decToBin(x);
    string t = decToBin(y);
    //cout << s << endl << t << endl;
 
    if(s.back() == '0'){
        string ss = s;
        while(ss.back() == '0'){
            ss.pop_back();
        }
        isOk(ss, t);
        ss = s;
        ss += '1';
        isOk(ss,t);
    }
    else{
        isOk(s,t);
    }
    cout << "NO
";
}
 
///Must see the constraints range
///Calculate the Time