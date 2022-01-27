#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();
    int i;
    int s=0;
    for(i=0;i<n;i++)
    {
        s1[i]=s1[i]-48;
        s2[i]=s2[i]-48;
      s=s+min(abs(s2[i]-s1[i]),abs(10-abs(s1[i]-s2[i])));
    }
  cout<<s;
    return 0;
}