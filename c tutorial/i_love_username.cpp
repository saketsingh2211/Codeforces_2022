#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,c=0;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    cin>>a[i];
    int max=a[0],min=a[0];    
 for(i=1;i<n;i++)
 {
if(a[i]>max)
{c++;
max=a[i];}
else if(a[i]<min) 
{
    c++;
    min=a[i];
}
 }
 cout<<c;
    return 0;
}