#include <bits/stdc++.h>
using namespace std;

int main(){
int k,r,p;
cin>>k>>r;
int i;
for(i=1;;i++)
{
p=k*i;
if(p%10==r||p%10==0)
{
    cout<<i;
    break;
}
}
    
    return 0;
}