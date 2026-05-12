#include <bits/stdc++.h>
using namespace std;

int revnum(int x) {
    int y = 0;
    while (x) y = y * 10 + x % 10, x /= 10;
    return y;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;
    const int V = 100000;
    vector<bool> p(V + 1, true);
    p[0] = p[1] = false;
    for (int i = 2; i * i <= V; i++) if (p[i]) {
        for (int j = i * i; j <= V; j += i) p[j] = false;
    }
    bool first = true;
    for (int x = m; x <= n; x++) {
        int y = revnum(x);
        if (p[x] && y <= V && p[y]) {
            if (!first) cout << ',';
            first = false;
            cout << x;
        }
    }
    if (first) cout << "No";
    return 0;
}
