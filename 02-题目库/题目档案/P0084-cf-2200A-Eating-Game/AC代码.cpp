#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int total = 0;
        for (int &x : a) {
            cin >> x;
            total += x;
        }

        set<int> win;
        for (int st = 0; st < n; st++) {
            vector<int> b = a;
            int left = total;
            int cur = st;
            while (left > 0) {
                if (b[cur] > 0) {
                    b[cur]--;
                    left--;
                    if (left == 0) win.insert(cur);
                }
                cur = (cur + 1) % n;
            }
        }

        cout << win.size() << '\n';
    }
    return 0;
}
