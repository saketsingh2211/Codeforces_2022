#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
 int i;
 for(i=1;i<=t;i++)
 {
    long long int n;
     cin>>n;
     if(n==1||n==2)
     cout<<0<<endl;
     else if(n%2!=0)
     cout<<n/2<<endl;
     else
     cout<<n/2-1<<endl;
 }   
    return 0;
}