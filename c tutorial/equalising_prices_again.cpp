#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
int i,j;

for(i=1;i<=t;i++)
{
   long long int n;
    cin>>n;
 long long int a[n];
 for(j=0;j<n;j++)
 {
     cin>>a[j];
    }
 sort(a,a+n);
if(n%2!=0)
cout<<a[n/2];
else cout<<min(a[n/2],a[n/2]-1);
cout<<endl;
}
    
    return 0;
}