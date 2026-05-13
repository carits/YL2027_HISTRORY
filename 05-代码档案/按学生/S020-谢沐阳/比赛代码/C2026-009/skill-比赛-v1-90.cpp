#include <bits/stdc++.h>
using namespace std;
int n, m, a[5][10];
int main(){
    freopen("skill.in", "r", stdin);
    freopen("skill.out", "w", stdout);
    for(int i = 1; i <= 5; i++)
        a[1][i] = 20;
    a[2][1] = a[2][2] = a[2][5] = 20;
    a[2][3] = 10, a[2][4] = 30;
    a[3][1] = a[3][2] = 25;
    a[3][3] = 30, a[3][4] = 20;
    for(int i = 1; i <= 6; i++)
        a[4][i] = 15;
    a[4][3] = a[4][4] = 10;
    a[4][7] = 20;
    cin >> n >> m;
    cout << a[n][m];
    return 0;
}
