#include <bits/stdc++.h>
using namespace std;

int main(){

   long long int n,k,s;
   cin>>n>>k;
   int i;
   long long int x,y;
   pair<int,int>p[n];
   for(i=0;i<n;i++)
   {
    cin>>x>>y;
    make_pair(x,y);
   }
   sort(p,p+n);
   for(i=n-1;i>=0;i--)
   {
   s=s+p[i].first;
    if(k-p[i].second<0)
{
    cout<<s;
    return 0;
}

   }
   cout<<s;
    return 0;
}