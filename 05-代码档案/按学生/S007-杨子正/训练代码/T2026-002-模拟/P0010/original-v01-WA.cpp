#include <bits/stdc++.h>
using namespace std;
map <char, int> d;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};
void init()
{
    d['D'] = 0;
    d['U'] = 1;
    d['L'] = 2;
    d['R'] = 3;
}
void work() 
{
    init();
    int n;
    string s;
    cin >> n >> s;
    int x = 0, y = 0;
    bool t = false;
    for (int i = 0; i <= n; i++)
    {
        x += dx[d[s[i]]];
        y += dy[d[s[i]]];
        if (x == 1 && y == 1)
            t = true;
    } 
    if (t)
        cout << "YES\n";
    else
        cout << "NO\n";
    return ;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        work();
    return 0;
}