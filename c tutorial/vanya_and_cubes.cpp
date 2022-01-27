#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i;
    int s=0;
    for(i=1;;i++)
    {
   s=s+i*(i+1)/2;
   if(s>n)
   {
       cout<<i-1;
       break;
   }
    }
    return 0;
}