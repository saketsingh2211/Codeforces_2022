#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    int c=0;
    int i;
    int a[s.length()];
    for(i=0;i<s.length();i++)
    {
        if(s[i]>=49&&s[i]<=51&&s[i]!=' ')
       { a[i]=s[i];}
    }
    sort(a,a+s.length());
    for(i=0;i<s.length();i++)
    {
        cout<<a[i]<<"+";
    }
    return 0;
}