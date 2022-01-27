#include <bits/stdc++.h>
using namespace std;

int main(){
int i;
    int n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
    cin>>a[i];   
    }
    int temp;
    for ( i = 0; i <n/2; i++)
    {
      temp=a[i];
      a[i]=a[n-i-1];
      a[n-i-1]=temp;
    }
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
    return 0;
}