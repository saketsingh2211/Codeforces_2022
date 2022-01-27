#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
  
   string s;
  cin>>s;
  int i;
 cout<<s[0];
  for(i=1;i<n;i++)
  {
  if(s[i-1]!='a'||s[i-1]!='e'||s[i-1]!='i'||s[i-1]!='o'||s[i-1]!='u'||s[i-1]!='y')
  cout<<s[i];   
  }
    return 0;
}