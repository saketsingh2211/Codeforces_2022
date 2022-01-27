#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int i;
int s=0;
for(i=1;i<=n;i++)
{ 
    string s1;
 cin>>s1;
 if(s1=="Tetrahedron") 
  s=s+4;
  if(s1=="Cube") 
 s=s+6;
 if(s1=="Octahedron")
s=s+8;
if(s1=="Dodecahedron")
s=s+12;
if(s1=="Icosahedron")
s=s+20;
}
  cout<<s;  
    return 0;
}