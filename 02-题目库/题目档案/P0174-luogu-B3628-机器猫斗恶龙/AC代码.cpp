#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long long s = 0, mn = 0;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        s += x;
        mn = min(mn, s);
    }
    cout << max(1LL, 1 - mn) << '\n';
    return 0;
}
