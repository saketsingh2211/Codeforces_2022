#include <bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
int n=s.length();
int i,c1=0,c2=0;
for(i=0;i<n;i++)
{
    if(s[i]>=65&&s[i]<=92)
    c1++;
   
}
if(c1>n-c1)
{
transform(s.begin(), s.end(), s.begin(), ::toupper);
}
else
transform(s.begin(), s.end(), s.begin(), ::tolower);
    return 0;
}