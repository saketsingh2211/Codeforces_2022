#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string s;
  cin>>s;
 int c=0;
 while(n--)
 {
     if((s[0]=='+'&&s[1]=='+')||(s[1]=='+'&&s[2]=='+'))
    c++;
    if((s[0]=='-'&&s[1]=='-')||(s[1]=='-'&&s[2]=='-'))
    c--;
 }
    return 0;
}