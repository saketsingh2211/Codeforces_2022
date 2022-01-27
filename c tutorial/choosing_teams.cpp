#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;
    int i;
    int c=0;
    int a[n];
    for(i=0;i<n;i++)
    {
     cin>>a[i];
     if(5-a[i]>=k)
     c++;
    }
    cout<<c/3;
    return 0;
}