#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 5;
int n, k;
bool vis[N];
int main()
{
    cin >> n >> k;
    for(int i = 1; i <= k; i ++)
        for(int j = i; j <= n; j += i)
            vis[j] = !vis[j];
    for(int i = 1; i <= n; i ++)
        if(vis[i] == 1)
            cout << i << " ";
    return 0;
}