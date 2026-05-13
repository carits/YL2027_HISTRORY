#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 5;
int n, s, m;
bool vis[N];
int main()
{
    cin >> n >> s >> m;
    s --;
    for(int i = 1; i <= n; i ++)
    {
        for(int j = 1; j <= m; j += !vis[s])
            s = s % n + 1;
        cout << s << " ";
        vis[s] = 1;
    }
    return 0;
}