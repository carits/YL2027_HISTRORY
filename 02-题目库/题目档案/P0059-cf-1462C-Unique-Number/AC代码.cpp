#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int x;
        cin >> x;
        if (x > 45) {
            cout << -1 << '\n';
            continue;
        }
        vector<int> d;
        for (int i = 9; i >= 1; i--) {
            if (x >= i) {
                d.push_back(i);
                x -= i;
            }
        }
        reverse(d.begin(), d.end());
        for (int v : d) cout << v;
        cout << '\n';
    }
    return 0;
}
