#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int n;
    cin>>n;
   if((n-4)%4==0)
   cout<<0;
   else if((n-3)%4==0)
   cout<<0;
   else if((n-2)%4==0)
   cout<<1;
   else
   cout<<1;
    return 0;
}