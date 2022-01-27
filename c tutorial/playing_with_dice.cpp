#include <bits/stdc++.h>
using namespace std;

int main(){
int a,b;
cin>>a>>b;
int i;
int x=0,y=0,z=0;
int p=0,q=0;
for(i=1;i<=6;i++)
{
p=abs(a-i);
q=abs(q-i);
if(p>q)
x++;
else if(p<q)
y++;
else 
z++;
}
   cout<<x<<""<<z<<" "<<y; 
    return 0;
}