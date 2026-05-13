#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n, k;
int a[N];
vector<int> b[N];
int ans = INT_MAX, sum;
void work(int x)
{
    int cnt = 0;
    while (x > 0)
    {
        b[x].push_back(cnt);
        x /= 2;
        cnt++;
    }
    b[x].push_back(cnt);
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        work(a[i]);
    for (int i = 0; i < N; i++)
    {
        sum = 0;
        if (b[i].size() < k)
            continue;
        sort(b[i].begin(), b[i].end());//
        for (int j = 0; j < k; j++)
            sum += b[i][j];
        ans = min(ans, sum);
    }
    cout << ans << "\n";
    return 0;
}