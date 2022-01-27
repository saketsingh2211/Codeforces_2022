#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
     if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    
    if (a == b)
        return a;
  
    
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main(){
int a,b,n;
cin>>a>>b>>n;
while(1)
{
    int res1=gcd(a,n);
    n=n-res1;
    if(n==0)
    {
        cout<<0;
        break;
    }
    int res2=gcd(b,n);
    n=n-res2;
    if(n==0)
    {
        cout<<1;
        break;
    }
}
    return 0;
}