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
        vector<int> key(4);
        for (int i = 1; i <= 3; i++) cin >> key[i];

        int cnt = 0;
        while (x != 0 && cnt < 3) {
            x = key[x];
            cnt++;
        }

        cout << (cnt == 3 ? "YES" : "NO") << '\n';
    }

    return 0;
}
