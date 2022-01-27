#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
int x;
while (t--)
{
cin>>x;
if(x>=1&&x<100)	
cout<<"easy";
if(x>=100&&x<200)	
cout<<"medium";
if(x>=200&&x<300)	
cout<<"hard";
}

	
	return 0;
}