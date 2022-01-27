#include <bits/stdc++.h>
using namespace std;

int main(){
int c=0;
    string s;
getline(cin,s);
int n=s.length();
for(int i=0;i<n;i++)
{
    if(s[i]>=97&&s[i]<=122&&s[i-1]==' ')
    c++;
}
cout<<c+1;
    return 0;
}