#include<bits/stdc++.h>
 
using namespace std;
 
int main ()
 
{
    int  n, i, j, k = 0;
 
    int count=0;
 
    cin >> n;
    int a[n],b[n],c[n];
 
    for (i = 0; i < n; i++){
        cin >> a[i];
        //c[n-i-1] = a[i];
    }
    for (i = 0; i < n/2; i++){
        swap(a[i], a[n-i-1]);
    }
    //cout  << endl;
 
 
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (a[i] == b[j])
                break;
        }
        if (j == k)
        {
            b[k] = a[i];
            k++;
            count++;
        }
    }
    cout<<count<<endl;
 
    for (i = k-1; i >=0; i--)
        cout << b[i] << " ";
 
    return 0;
 
}
 