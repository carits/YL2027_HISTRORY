#include <bits/stdc++.h>
using namespace std;
bool t[114514];
int main() 
{
    memset(t, true, sizeof t);
    int l, m;
    cin >> l >> m;
    for (int i = 1; i <= m; i++) 
    {
        int a, b;
        cin >> a >> b;
        for (int j = a; j <= b; j++)
            t[j] = false;
    }
    int ans = 0;
    for (int i = 0; i <= l; i++)
        ans += t[i];
    cout << ans;
    return 0;
}