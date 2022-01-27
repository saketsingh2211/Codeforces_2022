#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    int max=0,min=0;
    int pos1=0,pos2=0;
    for(i=1;i<=n;i++)
    {
       if(a[i]>max)
       {max=a[i];
       pos1=i;}
    }
    for(i=n-1;i>=0;i--)
    {
       if(a[i]<min)
       {min=a[i];
       pos2=i;}
    }
    cout<<pos1-1+n-pos2-(pos1<pos2);
    return 0;
}