#include <bits/stdc++.h>
using namespace std;

int main(){
int n,c=0;
cin>>n;
string s;
cin>>s;
int ch[26];

int i;
for(i=0;i<n;i++)
  {
      if(s[i]>=65&&s[i]<=92)
      s[i]=(char)s[i]-32;
      ch[s[i]-'a']++;
  }  
for(i=0;i<26;i++)
{
if(ch[i]>=1)
c++;

}
if(c==26)
cout<<"YES";
else cout<<"NO";

    return 0;
}