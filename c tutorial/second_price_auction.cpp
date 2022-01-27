#include <bits/stdc++.h>
using namespace std;

int main(){
    int pos=0,max=0;
    int n;
    cin>>n;
    int i;
    int a[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
       { 
           max=a[i];
           pos=i;
       }

    }
    sort(a,a+n);
    cout<<pos<<" "<<a[n-1];
    return 0;
}