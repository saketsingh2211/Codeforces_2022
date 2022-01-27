#include <bits/stdc++.h>
using namespace std;

int main(){
int n,k;
cin>>n>>k;
int s=0;
int i;
int c=0;
for(i=1;;i++)
{
  s=s+5*i;
  c++;
  if(s>240-k||c>n)
  break;
}
cout<<c--;
    return 0;
}