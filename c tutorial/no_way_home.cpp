#include <bits/stdc++.h>
using namespace std;

int main(){
int n,d;
cin>>n>>d;
string s;
cin>>s;
int i,j;
int pos=0;
int max=0;
int c=0;
for(i=0;i<s.length();i++)
{
    for(j=1;j<=d;j++)
    {
        pos=i+j;
      if(s[pos]=='1')
   {
       if(pos>max)
       max=pos;
   }
    }
    if(max>s.length()-1)
    return -1;
    else
    c++;
}
    cout<<c;
    return 0;
}