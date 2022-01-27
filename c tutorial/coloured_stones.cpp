#include <bits/stdc++.h>
using namespace std;

int main(){
int i;
int pos=0;
    string s,t;
    cin>>s>>t;
    int k=1;
    int n1=s.length();
    int n2=t.length();
     int i,j;
     for(i=0;i<n1;i++)
     {
    for(j=pos;j<n2;j++)
    {
     if(s[i]==t[j])
     {k++;
     pos=j+1;
     break;
     }
     
    }
     
     }
     cout<<k;
    return 0;
}