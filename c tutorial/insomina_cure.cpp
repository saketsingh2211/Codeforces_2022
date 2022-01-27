#include <bits/stdc++.h>
using namespace std;

int main(){
  int c=0;
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int i;
    for(i=1;i<=d;i++)
    {
        if(d%k==0||d%l==0||d%m==0||d%n==0)
        c++;

    }
    cout<<c;
    return 0;
}