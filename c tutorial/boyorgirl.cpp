#include <bits/stdc++.h>
using namespace std;

int main(){
   int c=0;
    string s;
    cin>>s;
    int ch[26]={0};
    int n=s.length();
    int i;
    for(i=0;i<n;i++)
    {
     ch[s[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
     if(ch[i]>=1)
     c++;   
       
    }
   if(c%2!=0)
   cout<<"CHAT WITH HER!";
   else
   cout<<"IGNORE HIM!";
    return 0;
}