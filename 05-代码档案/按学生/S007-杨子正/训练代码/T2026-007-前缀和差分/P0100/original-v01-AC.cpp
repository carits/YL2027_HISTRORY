#include <bits/stdc++.h>
using namespace std;
const int N = 5e6 + 5;
int a[N], diff[N];
int main() 
{
    int n, p;
    cin >> n >> p;
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
        diff[i] = a[i] - a[i - 1];
    }
    int ans = INT_MAX;
    while (p--) 
    {
        int x, y, z;
        cin >> x >> y >> z;
        diff[x] += z, diff[y + 1] -= z;
    }
    for (int i = 1; i <= n; i++) 
    {
        a[i] = a[i - 1] + diff[i];
        ans = min(a[i], ans);
    }
    cout << ans;
    return 0;
}