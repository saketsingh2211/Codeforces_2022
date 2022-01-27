#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    int i;
    int s1=0,s2=0,s3=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    if((i==1)||(i-1)%3==0)
    s1=s1+a[i];
     if((i==2)||(i-2)%3==0)
     s2=s2+a[i];
     if(i%3==0)
     s3=s3+a[i];
    }
    if(s1>s2&&s1>s3)
    cout<<"chest";
    else if(s2>s1&&s2>s3)
    cout<<"biceps";
    else if(s3>s1&&s3>s2)
    cout<<"back";
    return 0;
}