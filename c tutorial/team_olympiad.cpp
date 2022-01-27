#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i;
    int c1=0,c2=0,c3=0;
    int a[n];
    for(i=0;i<n;i++)
 {
     cin>>a[i];
     if(a[i]==1)
     c1++;
     else if(a[i]==2)
     c2++;
     else
     c3++;
 }
  int min = (c1 < c2) ?
          (c1 <c3 ? c1 : c3) :
          (c2 < c3 ? c2 : c3);
   cout<<min<<endl;
  int x[min],y[min],z[min];
  int pos1=0,pos2=0,pos3=0;
for(i=0;i<n;i++)
{
   if(a[i]==1)
   {x[pos1]=i;pos1++;}
   if(a[i]==2)
   {x[pos2]=i;pos2++;}
   if(a[i]==3)
   {x[pos3]=i;pos3++;}
}
for(i=0;i<min;i++)
{
    cout<<x[min]<<" "<<y[min]<<" "<<z[min]<<endl;
}
    return 0;
}