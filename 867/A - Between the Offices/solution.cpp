#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long n,count = 0,i;
    cin >> n;
    string s;
    cin >> s;
    for(i=1;i<s.size();i++)
    {
        if(s[i-1] == 'S' && s[i] == 'F')
            count++;
        else if(s[i-1] == 'F' && s[i] == 'S')
            count--;
    }
    if(count > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}