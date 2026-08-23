#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int a[n],i,count1=0;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        count1=count1+a[i];
    }
    if(count1==0)
        cout << "EASY" << endl;
    else
 
        cout << "HARD" << endl;
    return 0;
}