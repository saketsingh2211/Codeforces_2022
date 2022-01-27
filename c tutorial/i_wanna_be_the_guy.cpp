#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
int c=0;
cin>>n;
 
int a[2*n]={0};
int x;
int i;

for(i=0;i<2*n;i++)
{
    cin>>a[i];
}

map<int,int>m;
for(i=0;i<2*n;i++)
{
    m[a[i]]++;
}
for(i=1;i<=n;i++)
{
    for(auto it: m)
    {
        if(it.first==i&&it.second>=1)
    c++;
    }
}
if(c==n)
cout<<"I become the guy.";
else
cout<<"Oh, my keyboard!";
    return 0;
}