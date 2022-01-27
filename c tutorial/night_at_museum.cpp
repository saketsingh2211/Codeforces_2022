#include <bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
int i;
int sum=0;
for(i=0;i<s.length();i++)
{
sum=sum+min(abs(s[i]-'a'),abs(26-s[i]+'a'));
}
   cout<<s; 
    return 0;
}