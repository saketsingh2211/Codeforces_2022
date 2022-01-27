#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
int i,j;
int x,y;
int c=0;
pair<int,int>p[n];
for(i=0;i<n;i++)
{
    cin>>x>>y;
   p[i]=make_pair(x,y);
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(i!=j)
        {
        if(p[i].first==p[j].second)
        c++;
       

        }
    }
}
    cout<<c;
    return 0;
}