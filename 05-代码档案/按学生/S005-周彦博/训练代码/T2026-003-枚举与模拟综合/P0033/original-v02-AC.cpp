#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, cnt, pyx[8] = {-2, -2, +2, + 2, -1, -1, 1, 1}, pyy[8] = {-1, 1, -1, 1, -2, 2, -2, 2};
bool f[10][10];
char c1, c2;
int main(){
    cin >> c1 >> a >> c2 >> b;
    c = c1 - 'a' + 1;
    d = c2 - 'a' + 1;
    f[a][c] = 1;
    f[b][d] = 1;
    if (b >= 2){
        f[b - 2][d + 1] = 1;
        f[b - 2][d - 1] = 1;
        
    }
    if (b <= 6){
        f[b + 2][d + 1] = 1;
        f[b + 2][d - 1] = 1;//i is 列 j is 行 a && b is 列 c&& d is 行
    }
    if (d >= 2){
        f[b - 1][d - 2] = 1;
        f[b + 1][d - 2] = 1;
    }
    if (d <= 6){
        f[b - 1][d + 2] = 1;
        f[b + 1][d + 2] = 1;
    }
    for (int i = 1; i <= 8; i++) f[a][i] = 1;
    for (int i = 1; i <= 8; i++) f[i][c] = 1;
    for (int i = 1; i <= 8; i++){
        for (int j = 1; j <= 8; j++){
            if (!f[i][j]){
                for (int x = 0; x <= 7; x++){
                    if (i + pyx[x] == a && j + pyy[x] == c){
                        f[i][j] = 1;
                        break;
                    } 
                    if (x == 7) cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}