#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--)
{
    int x,y,a,b,k;
    cin>>x>>y>>a>>b>>k;
    int p=x+a*k;
    int d=y+b*k;
    if(p<d)
    cout<<"PETROL"<<endl;
    if(p>d)
    cout<<"DIESEL"<<endl;
    if(p==d)
    cout<<"SAME PRICE"<<endl;
}
    return 0;
}