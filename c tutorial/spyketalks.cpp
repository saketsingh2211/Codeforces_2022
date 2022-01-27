#include <bits/stdc++.h>
using namespace std;

int main(){
    int res=0;
    int n;
    cin>>n;
    long long int a[n];
   map<long long int,int>p;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        p[a[i]]++;
    }
    for(auto x: p)
    {
        if(x.first==0)
        continue;
        if(x.second==2)
        res++;
        else if(x.second>2)
       { res=-1;break;}
    }
    cout<<res;
    return 0;
}