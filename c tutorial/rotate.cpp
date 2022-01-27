#include <bits/stdc++.h>
using namespace std;
void reverse(int *a,int first,int last)
{
int i,temp;
for(i=first;i<last/2;i++)
{
temp=a[i];
a[i]=a[last-i-1];
a[last-i-1]=temp;

}

}
int main()
{
int n,d;
cin>>n>>d;
d=d%n;
int a[n];
int i;
for ( i = 0; i <n; i++)
{
    cin>>a[i];

}
reverse(a,0,n);
reverse(a,0,n-d);
reverse(n-d,n);

for ( i = 0; i < n; i++)
{
    cout<<a[i]<<endl;
}

    
    return 0;
}