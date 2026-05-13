#include <bits/stdc++.h>
using namespace std;
const int N = 3e5 + 5;
int n, k, a[N], f[N], ans;
int main() 
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
        f[i - 1] = a[i - 1] - a[i]; 
    }
    sort(f + 1, f + n + 1);
    ans = a[n] - a[1];
    for (int i = 1; i < k; i++) ans += f[i];
    cout << ans; //
    return 0;
}