#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int r=0;
    int i;
    if(n==0)
    cout<<"O-|-OOOO";
    else{
    while(n!=0)
    {
   r=n%10;
   if(r<5)
   {cout<<"O-|";
   for(i=1;i<=r;i++)
   {
       cout<<"O";
   }
   cout<<"-";
   for(i=r+2;i<=5;i++)
   cout<<"O";
   }
   else if(r>=5)
   {
     cout<<"-O|";
     r=r-5;
     for(i=1;i<=r;i++)
   {
       cout<<"O";
   }
   cout<<"-";
   for(i=r+2;i<=5;i++)
   cout<<"O";  
   }
   cout<<endl;
   n=n/10;
    }}
    return 0;
}