#include <bits/stdc++.h>
using namespace std;
 
char sheet[115][115];
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int min_v = 115, max_v = -1, min_h =115, max_h = -1;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf(" %c", &sheet[i][j]);
            if (sheet[i][j] =='B') {
                min_v = min(min_v, i);
                max_v = max(max_v, i);
                min_h = min(min_h, j);
                max_h = max(max_h, j);
            }
        }
    }
 cout<<(min_v+max_v)/2+1<<" "<<(min_h+max_h)/2+1;
    return 0;
 
}