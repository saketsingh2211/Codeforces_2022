#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
int c1=0,c2=0;
int i;
for(i=0;i<n;i++)
{
    cin>>a[i];
    if(a[i]>0)
    c1++;
    else if(a[i]<0)
    c2++;
}
if(n%2==0){
if(c1>=c2&&c1>=n/2)
cout<<1;
else if(c2>=c1&&c2>=n/2)
cout<<-1;
else
cout<<0;}
if(n%2!=0){
if(c1>=c2&&c1>n/2)
cout<<1;
else if(c2>=c1&&c2>n/2)
cout<<-1;
else
cout<<0;}
    return 0;
}