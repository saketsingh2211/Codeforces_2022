#include <bits/stdc++.h>
using namespace std;

int main(){
int i,j,k;
int r,c;
cin>>r>>c;
char a[r][c];
int c1=0;
int c2=0;
int c3=0;
vector<pair<int,int>>v;
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        cin>>a[i][j];
        if(a[i][j]=='S')
 {c1++;
v.push_back({i,j});

 }
    }
}
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           if(a[i][j]!='S')
         { for(k=0;k<c1;k++)
           {
              if(i==v[i].first||j==v[i].second)
              c2++;
           }
           if(c2<2)
           c3++;
           }
       }
   } cout<<c3;
    return 0;
}