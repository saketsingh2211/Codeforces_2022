#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=1;i<=n;i++)
    a[i]=i;
    if(n%2==0)
    {for(i=n;i>=1;i--)
    
        cout<<a[i]<<" ";
    }
   else cout<<-1;
    return 0;
}