#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * 5;
        if (sum + k <= 240)
            ans++;
        else
            break;
    }
    cout << ans;
    return 0;
}