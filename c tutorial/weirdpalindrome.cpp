#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--)
{
    int c1=0;
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        c1++;
}
if(c1==0||c1==1)
 cout<<"0";
if(c1%2==0)
cout<<c1/2;
if(c1%2!=0) 
cout<<(c1-1)/2;
cout<<endl;  
}
    
    return 0;
}