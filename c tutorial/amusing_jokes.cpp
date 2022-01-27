#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string s4=s1+s2;
    sort(s4.begin(),s4.end());
    sort(s3.begin(),s3.end());
    if(s4.length()!=s3.length())
    cout<<"NO";
    else
    {
        int i;
        for(i=0;i<s4.length();i++)
        {
            if(s3[i]!=s4[i])
        {
            cout<<"NO";
            return 0;
        }
        }
        cout<<"YES";
    }
    return 0;
}