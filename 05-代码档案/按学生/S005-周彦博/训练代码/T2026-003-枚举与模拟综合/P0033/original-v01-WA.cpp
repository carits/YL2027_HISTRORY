#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, cnt;
bool f[10][10];
char c1, c2;
int main(){
    cin >> c1 >> a >> c2 >> b;
    c = c1 - 'a' + 1;
    d = c2 - 'a' + 1;
    if (b >= 2 && b <=6){
        f[b - 2][d + 1] = 1;
        f[b - 2][d - 1] = 1;
        f[b + 2][d + 1] = 1;
        f[b + 2][d - 1] = 1;//i is 列 j is 行 a && b is 列 c&& d is 行
    }
    if (d >= 2 && d <= 6){
        f[b - 1][d + 2] = 1;
        f[b - 1][d - 2] = 1;
        f[b + 1][d + 2] = 1;
        f[b + 1][d - 2] = 1;
    }
    for (int i = 1; i <= 8; i++) f[a][i] = 1;
    for (int i = 1; i <= 8; i++) f[i][c] = 1;
    for (int i = 1; i <= 8; i++){
        for (int j = 1; j <= 8; j++){
            if (!f[i][j]){
                cnt++;
            }
        }
    }
    cout << cnt - 3;
    return 0;
}