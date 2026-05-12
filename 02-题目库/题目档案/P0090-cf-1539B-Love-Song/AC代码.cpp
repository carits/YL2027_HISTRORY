#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> pre(n + 1);
    for (int i = 1; i <= n; i++) pre[i] = pre[i - 1] + (s[i - 1] - 'a' + 1);

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << '\n';
    }
    return 0;
}
