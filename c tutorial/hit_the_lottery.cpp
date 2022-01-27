#include <bits/stdc++.h>
using namespace std;

int main(){

   long long int n;
    cin>>n;
   long long int c=0;
    c=c+n/100;
    n=n-(n/100)*100;
    c=c+n/20;
    n=n-(n/20)*20;
    c=c+n/10;
    n=n-(n/10)*10;
    c=c+n/5;
    n=n-(n/5)*5;
    c=c+n/1;
    cout<<c;
    return 0;
}