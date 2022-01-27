#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
int i;
for(i=1;i<=t;i++)
  { int h,m;
    cin>>h>>m;
   
   h=24-h-1;
    
    
    cout<<60*h+m<<endl;
    return 0;
}