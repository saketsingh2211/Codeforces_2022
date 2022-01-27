#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int count[26]={0};
string s;
    cin>>s;
    int i;
    for ( i = 0; i <n; i++)
   count[s[i]-'a']++;
   for(i=0;i<26;i++)
   {
       if(count[i]>0)
       {
       cout<<(char)(i+'a');
       cout<<count[i]<<endl;}
   }
    
    
    return 0;
}