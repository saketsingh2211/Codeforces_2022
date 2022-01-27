#include <bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
int i,j;
for(i=1;i<=t;i++)
{
    int c=0,c1=0;
    int n;
    cin>>n;
    string s;
    cin>>s;
    

     for(j=0;j<n;j++)
     {
         if(s[j]=='8')
         c1++;
         
     }
    for(j=0;j<n;j++)
    {
        if(s[j]!='8')
        c++;
        else {break;}
    }
    cout<<c<<" "<<c1;
    if(c1>=1&&n-c>=11)
    cout<<"YES";
    else
    cout<<"NO";
    cout<<endl;

}
    return 0;
}