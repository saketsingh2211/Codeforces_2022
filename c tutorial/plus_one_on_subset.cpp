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
      long long int a[n];
     long long int max=a[0],min=a[0];
      for(i=0;i<n;i++)
      {
          cin>>a[i];
     if(a[i]>max)
     max=a[i];
     if(a[i]<min)
     min=a[i];
      }
     cout<<max-min;
  }  
    return 0;
}