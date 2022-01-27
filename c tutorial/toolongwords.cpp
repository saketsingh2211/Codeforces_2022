#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
   while(n--)
   {
       string s;
       cin>>s;
       int l=s.length();
       if(l<=10)
       {cout<<s;cout<<endl;}
      if(l>10)
       {
           cout<<s.at(0)<<l-2<<s.at(l-1);
           cout<<endl;
       }
       
   }
    return 0;
}