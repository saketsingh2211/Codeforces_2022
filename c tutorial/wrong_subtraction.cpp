#include <bits/stdc++.h>
using namespace std;

int main(){
long long int n,k;

cin>>n>>k;
if(n>=2&&n<=9)
 cout<<n-k;
 else{
 int i;
 for(i=1;i<=k;i++)
 {
     if(n%10==0)
     n=n/10;
     else
     n--;
     
 }   cout<<n;}
    return 0;
}