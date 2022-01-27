#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
 cin>>t;
 int i;
 for(i=1;i<=t;i++)
 {
     int h,p;
     cin>>h>>p;
     while(h!=0||p!=0)
     {
         h=h-p;
         p=p/2;
     }
     if(h==0)
     cout<<1;
     else if(p==0)
     cout<<0;
     cout<<endl;
 }
    return 0;
}