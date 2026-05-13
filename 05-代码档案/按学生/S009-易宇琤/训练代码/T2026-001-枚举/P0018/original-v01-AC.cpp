#include <bits/stdc++.h>
using namespace std;

const int N = 5e3 + 5;
int n;
int maxn;
int a[N], sum[N];
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i ++)
    {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    for(int i = 1; i <= n; i ++)
        for(int j = i + 1; j <= n; j ++)
            maxn = max(maxn, sum[j] - sum[i - 1]);
    cout << maxn;
    return 0;
}