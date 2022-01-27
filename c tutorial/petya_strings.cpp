#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();
    int i;
    for(i=0;i<n;i++)
    {
        if((s1[i]>=65&&s1[i]<=91)||(s1[i]>=65&&s1[i]<=91))
        {
       s1[i]=(char)s1[i]+32;
       s2[i]=(char)s2[i]+32;
       }
    }
    for(i=0;i<n;i++)
    {
     if(s1[i]>s2[i])
     {cout<<1;break;}
     else if(s1[i]<s2[i])  
     {cout<<-1;break;}
     else
     {cout<<0; break;}
    }
    return 0;
}