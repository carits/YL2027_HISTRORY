#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 200005;
int n;
int a[N], b[N], cnt[N];
int ans;
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++) 
        cnt[i] = 0;
    ans = 0;
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
        ans += a[i];
    }
    int maxx = 0;
    for (int i = 1; i <= n; i++) 
    {
        cnt[a[i]]++;
        if (cnt[a[i]] == 2 && a[i] > maxx) 
            maxx = a[i];
        b[i] = maxx;
    }
    for (int i = 1; i <= n; i++) 
        if (b[i] != b[i - 1] && b[i] != b[i + 1]) 
        {
            ans += b[i];
            b[i] = b[i - 1];
            ans -= b[i];
        }
    for (int i = 1; i <= n; i++) 
        ans += b[n - i + 1] * i;
    cout << ans << "\n";
}
signed main() 
{
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}