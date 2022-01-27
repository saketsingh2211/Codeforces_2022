#include <bits/stdc++.h>
using namespace std;

int main(){
int c1=0,c2=0;
int flag=0;
    string s;
    cin>>s;
    int n=s.length();
    int i,j;
    for(i=0;i<n;i++)
    {
     for(j=i;j<7;j++)
     {
         if(s[i]=='0')
         {
             if(s[j]=='0')
             c1++;
         }
         if(s[i]=='1')
         {
             if(s[j]=='1')
             c2++;
         }
     }
     if(c1==7||c2==7)
     {
         flag=1;
         cout<<"YES";
         break;
     }
    }
    if(flag==0)
    cout<<"NO";
    return 0;
}