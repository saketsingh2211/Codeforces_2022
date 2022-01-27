#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    
    while(t--)
{
    int i,j;
string word;
getline(cin,word);
string s;
getline(cin,s);
int index[125];
int sum=0;

for(i=0;word[i]!='\0';i++)
{
   
        index[word[i]]=word[i]-97;
    
}
for(i=0;i<125;i++)
{
    if(index[i]>0)
    cout<<index[i]<<" "<<endl;
}

}
    return 0;
}