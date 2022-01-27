#include <bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
if(s=="a1"||s=="a8"||s=="h1"||s=="h8")
  cout<<3;
 else if((s[0]>='b'&&s[0]<='g')&&(s[1]=='1'||s[1]=='8'))
 cout<<5;
 else if((s[1]>='2'&&s[1]<='7')&&(s[0]=='a'||s[0]=='h'))
 cout<<5;
  else cout<<8;
    return 0;
}