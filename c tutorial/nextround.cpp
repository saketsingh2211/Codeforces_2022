#include <bits/stdc++.h>
using namespace std;

int main(){
int n,k;
cin>>n>>k;
int a[n];
int c=0;
int i;
for(i=0;i<n;i++)
{cin>>a[i];
}
for(i=0;i<n;i++)
{
      
 if(a[i]>=a[k-1])
 {
     if(a[i]>0)
     c++;
 }
}
cout<<c;
    return 0;
}