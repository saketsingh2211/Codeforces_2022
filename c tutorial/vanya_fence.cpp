#include <bits/stdc++.h>
using namespace std;

int main(){
int s=0;
    int n,h;
    cin>>n>>h;
    int i;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=h)
        s=s+1;
        if(a[i]>h)
        s=s+2;
    }
    cout<<s;
    return 0;
}