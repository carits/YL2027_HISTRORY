#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s, t;
    cin >> n >> s >> t;

    string a = s, b = t;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a != b) {
        cout << -1 << '\n';
        return 0;
    }

    vector<int> ops;

    for (int i = 0; i < n; i++) {
        if (s[i] == t[i]) continue;

        int j = i + 1;
        while (s[j] != t[i]) j++;

        while (j > i) {
            swap(s[j], s[j - 1]);
            ops.push_back(j);
            j--;
        }
    }

    cout << ops.size() << '\n';
    for (int x : ops) cout << x << ' ';
    cout << '\n';

    return 0;
}
