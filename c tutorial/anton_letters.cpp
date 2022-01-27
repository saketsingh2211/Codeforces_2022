#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    int ch[26]={0};
    int i;
    int c=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
           
                ch[s[i]-'a']++;
            }
        }
        for(i=0;i<26;i++)
        {
            if(ch[i]>1)
            c++;
        }
        cout<<c;
    return 0;
}