#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
cin>>n;
int c2=0;
while(n--)
{
    
    int c1=0;
    int a[3];
    int i;
    for(i=0;i<3;i++)
   { cin>>a[i];
    if(a[i]==1)
    c1++;
    }
  if(c1>=2)
c2++;

}
cout<<c2<<endl;
    return 0;
}