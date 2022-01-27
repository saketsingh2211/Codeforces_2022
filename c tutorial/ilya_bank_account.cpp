#include <bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
if(s[0]!='-')
cout<<s;
 
else if(s[0]=='-')
  {
 int n=s.length();
    if(s.length()==3&&(s[1]>='1'&&s[1]<='9')&&s[2]=='0')
   { cout<<0;}
  else 
{
  
  int i;
  
  for(i=0;i<n-2;i++)
  cout<<s[i];
if(s[i+1]>=s[i])
cout<<s[i];
else
cout<<s[i+1];
}
}

    return 0;
}