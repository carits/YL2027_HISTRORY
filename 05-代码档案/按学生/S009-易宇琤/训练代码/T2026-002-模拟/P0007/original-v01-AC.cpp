#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 5;
int n;
int x, y;
int pos;
bool flag;
int a[N], b[N], g[N], k[N];
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i ++)
        cin >> a[i] >> b[i] >> g[i] >> k[i];
    cin >> x >> y;
    for(int i = 1; i <= n; i ++)
        if((a[i] == x && b[i] == y) || (a[i] <= x && b[i] <= y && x <= a[i] + g[i] && y <= b[i] + k[i]))
        {
            flag = 1;
            pos = i;
        }
    if(flag == 0)
        cout << -1;
    else cout << pos;
    return 0;
}