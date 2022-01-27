#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    int i,j;
    int max=0,min=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    pair<int,int>p[n/2];
    int s=max+min;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]+a[j]==s)
           p[i]= make_pair(i,j);
        }
    }
    for(i=0;i<n/2;i++)
    {
        cout<<p[i].first<<" "<<p[i].second;
    }
    return 0;
}