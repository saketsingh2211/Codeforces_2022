#include <bits/stdc++.h>
using namespace std;

int main(){
   int c1=0,c2=0;
    int n;
    cin>>n;
    pair<int,int>p;
    int i;
    for(i=1;i<=n;i++)
    {
        cin>>p.first>>p.second;
        if(p.first>p.second)
        c1++;
        else if(p.first<p.second)
        c2++;
    }
    if(c1>c2)
    cout<<"Mishka";
    else if(c2>c1)
    cout<<"Chris";
    else cout<<"Friendship is magic!^^";
    return 0;
}