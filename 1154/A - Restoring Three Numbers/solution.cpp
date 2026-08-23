#include<bits/stdc++.h>
using namespace std;
 
void Bubble_Sort(int array[ ],int n)
{
    int k,ptr,temp;
    for(k=0;k<n-1;k++){
        ptr=0;
        while(ptr < n-k-1){
            if( array[ptr] < array[ptr+1]){
                temp = array[ptr];
                array[ptr] = array[ptr+1];
                array[ptr+1] = temp;
            }
            ptr = ptr+1;
        }
    }
}
 
int main()
{
    int ar[100];
    int i,a,b,c,d;
    for(i=0;i<4;i++)
        cin >> ar[i];
    Bubble_Sort(ar,4);
    for(i=0;i<4;i++){
        if(i==0)
            a=ar[i];
        if(i==1)
            b=ar[i];
        if(i==2)
            c=ar[i];
        if(i==3)
            d=ar[i];
    }
    int x=a-b;
    int y=a-c;
    int z=a-d;
    cout << x  << " "<< y << " " << z << endl;
}