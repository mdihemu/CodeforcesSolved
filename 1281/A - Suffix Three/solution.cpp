/*
Author: DarkMotion
*/
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
 
        char x = s.back();
 
        if(x== 'o')
            cout << "FILIPINO
";
        else if ( x == 'u')
            cout << "JAPANESE
";
        else
            cout << "KOREAN
";
    }
}
 