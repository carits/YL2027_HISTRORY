#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, k;
int a[N];
bool check(int x)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        cnt += a[i] / x;
    return cnt >= k;
}
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int l = 0, r = 1e8, ans = 0;
    while (l < r)
    {
        int mid = (l + r + 1) >> 1;
        if (check(mid))
            l = mid, ans = max(mid, ans);
        else r = mid - 1;
    }
    if (ans > 0)
        cout << ans;
    else cout << 0;
    return 0;
}