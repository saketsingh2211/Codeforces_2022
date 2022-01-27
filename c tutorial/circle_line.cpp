#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    int i,j;
    int s1=0,s2=0;
    for(i=1;i<=n;i++)
    {
    cin>>a[i];
    s1=s1+a[i];
    }
    int s,t;
    cin>>s>>t;
    if(s>t)
    swap(s,t);
    
    for(i=s;i<t;i++)
    s2=s2+a[i];
    cout<<min(s2,s1-s2);
    return 0;
}