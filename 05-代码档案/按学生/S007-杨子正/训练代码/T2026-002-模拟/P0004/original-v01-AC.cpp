#include <bits/stdc++.h>
using namespace std;
int a[55][55], z[6] = {2, 1, 0, 0, 0, 0}, s[6] = {6, 6, 6, 6, 5, 4}, xma, yma;
char c[1005][1005], cc[10][10] = 
{
"  +---+",
" /   /|", 
"+---+ |", 
"|   | +",
"|   |/", 
"+---+"
};
void f(int x, int y)
{
    for (int i = 5; i >= 0; i--)
        for (int j = z[i]; j <= s[i]; j++)
        {
            c[5 - i + x][j + y] = cc[i][j];
            if (5 - i + x > xma) xma = 5 - i + x;
            if (j + y > yma) yma = j + y;
        }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <  m; j++)
            cin >> a[i][j];
    for (int o = 1; o <= n; o++)
        for (int k = 0; k < m; k++)
            for (int l = 0; l < a[o][k]; l++)
                f((n - o) * 2 + 1 + 3 * l, (n - o) * 2 + 1 + 4 * k);
    for (int i = xma; i >= 1; i--)
    {
        for (int j = 1; j <= yma; j++)
            if (c[i][j] == '\000')
                cout << '.';
            else
                cout << c[i][j];
        cout << '\n';
    }
        
    return 0;
}