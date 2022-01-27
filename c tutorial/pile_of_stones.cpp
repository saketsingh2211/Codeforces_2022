#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;int i;
    for(i=0;i<s.length();i++)
    {
    if(s[i]=='-'&&c>0)
    c--;
    else if(s[i]=='+')
    c++;

    }
    cout<<c;
    return 0;
}