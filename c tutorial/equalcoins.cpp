#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
  long long int x,y;
cin>>x>>y;
long long int amt=x+2*y;
if(amt%2!=0)
cout<<"NO";
if(amt%2==0)
{
if(amt/2==0)
cout<<"NO";
else cout<<"YES";
}

}
    
    return 0;
}