#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<long long> a(n), b(m);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    sort(b.begin(), b.end());

    bool first = true;
    for (long long x : a) {
        if (binary_search(b.begin(), b.end(), x)) {
            if (!first) cout << ' ';
            cout << x;
            first = false;
        }
    }
    cout << '\n';
    return 0;
}
