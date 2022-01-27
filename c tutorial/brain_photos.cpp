#include <bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
int i,j;
int flag=0;
 char a[n][m];
 for(i=0;i<n;i++)
 {
     for(j=0;j<m;j++)
     {
         cin>>a[i][j];
     if(a[i][j]=='C'||a[i][j]=='M'||a[i][j]=='Y')
     {
         flag=1;
         break;
     }
     }
 }  
 if(flag==0)
 cout<<"#Black&White";
 else 
 cout<<"Color";
  
    return 0;
}