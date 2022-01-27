#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    int i;
    int max1=0,min1=0;
    int pos1=0,pos2=0;
    int result=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>max1)
        {
            max1=a[i];
            pos1=i;
    }
    if(a[i]<min1)
        {
            min1=a[i];
            pos2=i;
    }}
    int left=min(pos1,pos2);
    int right=n-max(pos1,pos2);
    if(left>right)
    {
    result=max(pos1,pos2);

    }
    else
    result=n-min(pos1,pos2);
    cout<<result;
    return 0;
}