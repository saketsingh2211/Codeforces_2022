#include <bits/stdc++.h>
using namespace std;

int main(){
int c=0;
int n,m;
cin>>n>>m;
int i,j;
for(i=0;i<=32;i++)
{
    for(j=0;j<=32;j++)
    {
        if(i*i+j==n&& i+j*j==m)
        {
            c++;
        }
    }
}
cout<<c;
    return 0;
}