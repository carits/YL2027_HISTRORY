#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> is(n + 1, true), primes;
    if (n >= 0) is[0] = false;
    if (n >= 1) is[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is[i]) {
            primes.push_back(i);
            for (long long j = 1LL * i * i; j <= n; j += i) is[j] = false;
        }
    }
    int cnt = 0;
    for (int i = 0; i + 1 < (int)primes.size(); i++) {
        int x = primes[i] + primes[i + 1] + 1;
        if (x <= n && is[x]) cnt++;
    }
    cout << (cnt >= k ? "YES" : "NO") << '\n';
    return 0;
}
