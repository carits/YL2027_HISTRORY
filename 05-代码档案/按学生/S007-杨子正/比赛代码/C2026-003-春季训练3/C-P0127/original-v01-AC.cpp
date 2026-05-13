#include <bits/stdc++.h>
#define llabs(x) (long long)(abs(x))
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 5);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    long long ans = 0, minn = 0;
    for (int i = 1; i <= n; i++)
    {
        long long maxx = ans + a[i], mi = minn + a[i];
        ans = max(max(maxx, llabs(maxx)), max(mi, llabs(mi)));
		minn = min(min(mi, llabs(mi)), min(maxx, llabs(maxx)));
    }
    cout << ans << "\n";
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}