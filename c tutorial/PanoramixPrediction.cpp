#include <bits/stdc++.h>
using namespace std;

int main(){
    int flag=0;
int i,j;
int c;
int a[49];
for(i=2;i<=50;i++)
 {c=0;
     for(j=1;j<=i;j++)
     {
         if(i%j==0)
         c++;

     }
     if(c==2)
     a[i]=i;
 }   
 int m,n;
 cin>>n>>m;
for(i=n;i<=50;i++)
{
  if(a[i]==m) 
  {
      cout<<"YES";
      flag=1;
      break;
  } 
}
if(flag==1)
{
    cout<<"NO";
}

    return 0;
}