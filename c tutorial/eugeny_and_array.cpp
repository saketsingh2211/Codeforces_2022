#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int i,j;
    int c1=0,c2=0,c3=0,c4=0;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
      if(a[i]==1)
      c3++;
      else c4++;

    }
    int x,y;
    
    for(i=0;i<m;i++)
    {
    cin>>x>>y;
    if((y-x)%2==0)
    cout<<0<<endl;
    else{
    for(j=x-1;j<y;j++)
    {
        if(a[j]==-1)
        c1++;
        else c2++;
    }
  if(abs(c2-c1)<=abs(c4-c1))
  cout<<1;
  else cout<<0;
    }}
    return 0;
}