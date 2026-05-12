#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long k, n, w;
    cin >> k >> n >> w;

    long long cost = k * w * (w + 1) / 2;
    cout << max(0LL, cost - n) << '\n';

    return 0;
}
