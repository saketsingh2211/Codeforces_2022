#include <bits/stdc++.h>
using namespace std;

int main(){
int c=0,c1=0;
int r=0;
    int n,k;
    cin>>n>>k;
  int a[n];
    int i;
    for(i=0;i<n;i++)
    {
    cin>>a[i];
   while(a[i]!=0)
   {
   r=a[i]%10;
   if(r==4||r==7)
   c++;
   a[i]/=10;
   }
   if(c<=k)
   c1++;
    }
    cout<<c1;


    return 0;
}