#include <bits/stdc++.h>
using namespace std;

int main(){
    int flag=0;
string s;
getline(cin,s);
int i;
for(i=0;i<s.length()/2;i++)
{
    if(s[i]!=s[s.length()-i-1])
    {flag=1;
    break;}

}
    if(flag==1)
    cout<<"NON PALINDROME";
    else
    cout<<"PALINDROME";
    return 0;
}