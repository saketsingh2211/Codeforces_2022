#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
string a,b,c;
 int i;
 int c1=0;
 for(i=1;i<=t;i++)  
 {
     c1=0;
     cin>>a>>b>>c;
     int n=a.length();
     for(i=0;i<n;i++)
     {
         if(c[i]==a[i]||c[i]==b[i])
         c1++;
     }
     if(c1==n)
     cout<<"YES";
     else cout<<"NO";
 } 
    return 0;
}