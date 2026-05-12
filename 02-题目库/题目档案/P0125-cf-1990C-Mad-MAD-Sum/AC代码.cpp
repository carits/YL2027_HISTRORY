#include <bits/stdc++.h>
using namespace std;

vector<int> mad_prefix(const vector<int> &a) {
    int n = a.size();
    vector<int> cnt(n + 1), b(n);
    int cur = 0;
    for (int i = 0; i < n; i++) {
        cnt[a[i]]++;
        if (cnt[a[i]] >= 2) cur = max(cur, a[i]);
        b[i] = cur;
    }
    return b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        long long ans = 0;
        for (int &x : a) {
            cin >> x;
            ans += x;
        }

        vector<int> b = mad_prefix(a);
        for (int x : b) ans += x;

        vector<int> c = mad_prefix(b);
        vector<int> freq(n + 1);
        for (int x : c) freq[x]++;

        long long suffix = 0;
        for (int v = n; v >= 1; v--) {
            long long f = freq[v];
            if (f == 1) {
                ans += v;
                suffix++;
            } else if (f > 1) {
                ans += 1LL * v * (f * (f + 1) / 2 + suffix * f);
                suffix += f;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
