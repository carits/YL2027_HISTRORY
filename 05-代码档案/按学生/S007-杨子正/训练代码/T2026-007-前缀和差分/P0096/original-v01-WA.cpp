#include <bits/stdc++.h>
using namespace std;
long long p(int a, int b)
{
    long long res = 1;
    while (b--)
        res *= a;
    return res;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 5), sum(n + 5);
    for (int i = 1; i <= n; i++)
        cin >> a[i], sum[i] = sum[i - 1] + a[i];
    int ans = 0;
    for (int l = 1; l <= n; l++)
        for (int r = l; r <= n; r++)
            for (int i = 1; i <= 10; i++)
                if (p(k, i) == sum[r] - sum[l - 1])
                    ans++;
    cout << ans;
    return 0;
}