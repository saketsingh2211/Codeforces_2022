#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int a[3]={a,b,c};
    sort(a,a+n);
    int i;
    int res=0;
    for(i=1;i<=t;i++)
    {
    for(j=0;j<3;j++)
    {
        res=a[2]-a[j];
       n=n-res;
    }
    if(n%3==0)
    cout<<"YES";
    else
    cout<<"NO";}
    return 0;
}