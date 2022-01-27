#include <bits/stdc++.h>
using namespace std;

int main(){
char t;
while(cin>>t&&t!=' ')
{
if(t=='.')
cout<<0;
else if(t=='-')
{
    cin>>t;
    if(t=='-')
    cout<<2;
    else if(t=='.')
    cout<<1;
}
}
   
}