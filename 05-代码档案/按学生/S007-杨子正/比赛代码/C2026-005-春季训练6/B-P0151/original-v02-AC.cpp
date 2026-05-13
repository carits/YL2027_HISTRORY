#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n + 5);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int cnt = 1, ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] * 2 >= a[i + 1])
            cnt++;
        else
        {
            ans = max(ans, cnt);
            cnt = 1;
        }
    }
    ans = max(ans, cnt);
    cout << ans;
    return 0;
}