#include <bits/stdc++.h>
using namespace std;

int main(){
int pos=0;
    string s,s1;
  getline(cin,s);
  int n=s.length();
  int i;
  for(i=0;i<n;i++)
  {
      if(s[i]>=65&&s[i]<=90&&s[i]>=97&&s[i]<=122)
     {s1[pos]=s[i];pos++;}
  }
  if(s1[pos]=='A'||s1[pos]=='a'||s1[pos]=='e'||s1[pos]=='E'||s1[pos]=='i'||s1[pos]=='I'||s1[pos]=='O'||s1[pos]=='o'||s1[pos]=='u'||s1[pos]=='U'||s1[pos]=='y'||s1[pos]=='Y')
   cout<<"YES";
   else cout<<"NO"; return 0;
}