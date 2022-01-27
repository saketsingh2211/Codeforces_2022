#include <bits/stdc++.h>
using namespace std;

int main(){
long long int a,b;
cin>>a>>b;
if(a==b)
{
    if(a%2!=0)
cout<<"Valera";
else cout<<"Vladik";}
if(a>b)
{if(a-b==1)
    cout<<"Vladik";
    else
cout<<"Valera";}
if(a<b)
{
    if(b-a==1)
    cout<<"Valera";
    else
cout<<"Vladik";
}  
    return 0;
}