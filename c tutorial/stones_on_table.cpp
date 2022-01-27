#include <bits/stdc++.h>
using namespace std;

int main(){
int c=0;
string s;
cin>>s;
int i;
int n=s.length();
for(i=0;i<n;i++)
{
    if((s[i]=='R'&&s[i+1]=='R')||(s[i]=='B'&&s[i+1]=='B')||(s[i]=='G'&&s[i+1]=='G'))
    c++;
}cout<<c;
    
    return 0;
}