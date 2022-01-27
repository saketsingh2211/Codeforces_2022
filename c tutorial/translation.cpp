#include <bits/stdc++.h>
using namespace std;

int main(){
    int flag=0;
  int i,j;
    string s,t;
    cin>>s>>t;
    int n1=s.length();
    int n2=t.length();
    if(n1!=n2)
    cout<<"NO";
    else{
       for(i=0,j=n2-1;i<n1,j>=0;i++,j--)
       {
           if(s[i]!=t[j])
           {
               cout<<"NO";
               break;
               flag=1;
           }
       }
       if(flag==0)
       cout<<"YES";
    }
  
    return 0;
}