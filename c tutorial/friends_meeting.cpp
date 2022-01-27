#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,b;
    int s=0;
    int i=1;
    if(a>b)
    swap(a,b);
    cin>>a>>b;
    while(1)
    {
        if(a==b)
        break;
        else{
     s=s+i;
     a++;}
     if(a==b)
     break;
     else
     {
      s=s+i;
      b--;
      i++;   
     }
  
    } cout<<s;
    return 0;
}