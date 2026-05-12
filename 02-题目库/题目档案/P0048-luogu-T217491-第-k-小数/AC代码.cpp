#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    long long x, y;
    cin >> n >> k >> x >> y;
    const long long mod = 1000000007LL;
    vector<int> a(n);
    long long cur = 1;
    for (int i = 0; i < n; i++) {
        cur = (cur * x + y) % mod;
        a[i] = (int)cur;
    }
    nth_element(a.begin(), a.begin() + k - 1, a.end());
    cout << a[k - 1] << '\n';
    return 0;
}
