#include <bits/stdc++.h>
using namespace std;

int main(){
signed long long int x1,x2,y1,y2;
cin>>x1>>x2>>y1>>y2;
int x_diff=abs(x2-x1);
int y_diff=abs(y2-y1);
cout<<max(x_diff,y_diff);
   
    return 0;
}