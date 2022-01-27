#include <bits/stdc++.h>
using namespace std;

int main(){

long long int x,y,j;
int t;
cin>>t;
int i;
for(i=1;i<=t;i++)
{
    cin>>x>>y;
    for(j=y-1;j>x;j--)
    {
    if(j%x==0)
    {
        cout<<x<<" "<<j;
       break;
    }
    }
    cout<<endl;
}
    return 0;
}