#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    char ch[26];
    getline(cin,s);
    int n=s.length();
    for(int i=0;i<26;i++)
    {
     if(s[i]==(97+i))
     ch[i++];
    }
    sort(ch,ch+26);
    cout<<ch[25];
    return 0;
}