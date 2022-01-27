#include <bits/stdc++.h>
using namespace std;

int main(){
int c1=0,c2=0;
    int n;
    cin>>n;
    int i;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='a')
        c1++;
        else c2++;
    }
    cout<<abs(c1-c2)/2<<endl;
   
    
     for(i=0;i<n;i++)
    {
   if(s[i]=='b')
   {
       if(i%2==0)
       cout<<'a';
       else
       cout<<'b';
   }
   if(s[i]=='a')
   {
       if(i%2!=0)
       cout<<'b';
       else cout<<'a';
   }
    }
    return 0;
}