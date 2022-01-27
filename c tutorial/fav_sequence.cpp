#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
int i;
for(i=1;i<=t;i++)
{
int n;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
}
int *x,*y;
x=a,y=a+n-1;
cout<<*x<<" "<<*y;
}   
    return 0;
}