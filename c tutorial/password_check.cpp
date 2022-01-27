#include <bits/stdc++.h>
using namespace std;

int main(){
int c1=0,c2=0,c3=0,c4=0;
    string s;
    cin>>s;
    int n=s.length();
    int i;
    for(i=0;i<n;i++)
    {
        if(s[i]>=65&&s[i]<=92)
        c1++;
        if(s[i]>=97&&s[i]<=122)
        c2++;
        if(s[i]=='!'||s[i]=='?'||s[i]==','||s[i]=='.'||s[i]=='_' )
        c3++;
        if(s[i]>=48&&s[i]<=57)
        c4++;
    }
    if(n>=5&&c1>=1&&c2>=1&&c3>=1&&c4>=1)
    cout<<"Correct";
    else cout<<"Too weak";
    return 0;
}