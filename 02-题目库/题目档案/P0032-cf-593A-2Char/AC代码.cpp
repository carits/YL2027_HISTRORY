#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> s(n);
    for (auto &x : s) cin >> x;

    int ans = 0;
    for (char a = 'a'; a <= 'z'; a++) {
        for (char b = a + 1; b <= 'z'; b++) {
            int cur = 0;
            for (auto &str : s) {
                bool ok = true;
                for (char c : str) {
                    if (c != a && c != b) {
                        ok = false;
                        break;
                    }
                }
                if (ok) cur += (int)str.size();
            }
            ans = max(ans, cur);
        }
    }
    cout << ans << '\n';
    return 0;
}
