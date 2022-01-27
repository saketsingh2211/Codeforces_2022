#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,k,l,c,d,p,x,y;
cin>>n>>k>>l>>c>>d>>p>>x>>y;
int a=k*l/x;
int b=c*d;
int f=p/y;
int result=min(min(a,b),f);
 cout<<result/n;   
    return 0;
}