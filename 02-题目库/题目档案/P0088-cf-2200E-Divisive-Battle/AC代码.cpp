#include <bits/stdc++.h>
using namespace std;

const int V = 1000000;
int spf[V + 1];

int prime_base(int x) {
    if (x == 1) return 1;
    int first = 0;
    while (x > 1) {
        int p = spf[x];
        if (!first) first = p;
        else if (first != p) return -1;
        while (x % p == 0) x /= p;
    }
    return first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 2; i <= V; i++) if (!spf[i]) {
        for (long long j = i; j <= V; j += i) if (!spf[j]) spf[j] = i;
    }

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int i = 0; i < n; i++) b[i] = prime_base(a[i]);
        if (is_sorted(a.begin(), a.end())) cout << "Bob\n";
        else if (find(b.begin(), b.end(), -1) != b.end()) cout << "Alice\n";
        else if (is_sorted(b.begin(), b.end())) cout << "Bob\n";
        else cout << "Alice\n";
    }
    return 0;
}
