#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
    string s;
    int c1=0,c2=0;
    cin>>s;
    int n1=s.length();
    int i;
    for(i=0;i<n1;i++)
    {
        if(s[i]=='A')
        c1++;
        else 
        c2++;
    }
    if(c1>c2)
    cout<<"Anton";
    if(c1<c2)
    cout<<"David";
    else"Friendship";
    return 0;
}