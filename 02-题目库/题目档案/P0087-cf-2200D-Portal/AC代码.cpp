#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, x, y;
        cin >> n >> x >> y;
        x--;
        y--;
        vector<int> a, b;
        for (int i = 0; i < n; i++) {
            int v;
            cin >> v;
            if (i <= x || i > y) a.push_back(v);
            else b.push_back(v);
        }
        if (!b.empty()) rotate(b.begin(), min_element(b.begin(), b.end()), b.end());
        int first = b.empty() ? -1 : b[0];
        auto it = a.begin();
        while (it != a.end() && *it < first) ++it;
        a.insert(it, b.begin(), b.end());
        for (int i = 0; i < n; i++) cout << a[i] << " \n"[i + 1 == n];
    }
    return 0;
}
