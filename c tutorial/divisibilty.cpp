#include <bits/stdc++.h>
using namespace std;

int main(){
int t;


int i;
cin>>t;

for(i=0;i<t;i++)
{
    long long int a,b;
    cin>>a>>b;
    if(a%b==0)
{
    cout<<"0";
}
else{
    
        if(a>b)
        cout<<(b*((a/b)+1))-a;
        else
        cout<<b-a;
   
   
}
cout<<endl;}
    return 0;
}