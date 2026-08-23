#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    if(n==1){
        cout << "I hate it" << endl;
    }
    else{
        int i;
        i=1;
        while(i<=n){
            if(i==n){
                if(i%2!=0){
                    cout << "I hate it" << endl;
                    i++;
                }
                else{
                    cout << "I love it" << endl;
                    i++;
                }
            }
            else{
                if(i%2!=0){
                    cout << "I hate that ";
                    i++;
                }
                else{
                    cout << "I love that ";
                    i++;
                }
            }
        }
    }
    return 0;
}