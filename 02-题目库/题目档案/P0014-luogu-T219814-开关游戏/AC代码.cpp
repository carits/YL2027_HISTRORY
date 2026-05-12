#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> on(n + 1, 0);
    for (int i = 1; i <= k; i++) {
        for (int j = i; j <= n; j += i) on[j] ^= 1;
    }
    bool first = true;
    for (int i = 1; i <= n; i++) {
        if (on[i]) {
            if (!first) cout << ' ';
            first = false;
            cout << i;
        }
    }
    cout << '\n';
    return 0;
}
