#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
 int a[n];
 int i,j;
 for(i=0;i<n;i++)
 {
     cin>>a[i];

 }
  sort(a,a+n, greater<int>());
 int s=0,c=0;
 for(i=0;i<n;i++)
 {
     
     for(j=i+1;j<n;j++)
     {
         s=s+a[j];
     }
     if(s<=a[i])
     {c++;continue;}
  else
  {
      cout<<c;
      return 0;
  }
 }
    return 0;
}