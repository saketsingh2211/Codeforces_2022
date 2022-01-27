#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int min1=min(a,b);
        b=b-min1;
        int min2=min(b,c);
        if(min1+min2>=n)
        cout<<"Yes";
        else
        cout<<"No";
        cout<<"endl";
    }
    return 0;
}