#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    int i;
    int c=0;
    if(n==1&&s=="0")
cout<<0;
else{
    for(i=0;i<n;i++)
    {
        if(s[i]=='0')
        c++;
    }
    cout<<1;
    for(i=0;i<c;i++)
    {
        cout<<0;
    }}
    return 0;
}