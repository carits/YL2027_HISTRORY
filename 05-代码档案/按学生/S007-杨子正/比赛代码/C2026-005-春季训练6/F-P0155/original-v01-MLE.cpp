#include <bits/stdc++.h>
using namespace std;
const int N = 3e5 + 5;
int l[N], r[N];
map<int, int> cnt;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> l[i] >> r[i];
        for (int j = l[i]; j <= r[i]; j++)
            cnt[j]++;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = l[i]; j <= r[i]; j++)
            cnt[j]--;
        int tot = 0;
        for (auto p : cnt)
            if (p.second == n - 1)
                tot++;
        tot--;
        ans = max(ans, tot);
        for (int j = l[i]; j <= r[i]; j++)
            cnt[j]++;
    }
    cout << ans;
    return 0;
}