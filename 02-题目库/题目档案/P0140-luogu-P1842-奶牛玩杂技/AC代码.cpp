#include <bits/stdc++.h>
using namespace std;

struct Cow {
    long long w, s;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Cow> a(n);
    for (auto &c : a) cin >> c.w >> c.s;

    sort(a.begin(), a.end(), [](const Cow &x, const Cow &y) {
        return x.w + x.s < y.w + y.s;
    });

    long long sum = 0;
    long long ans = LLONG_MIN;
    for (auto &c : a) {
        ans = max(ans, sum - c.s);
        sum += c.w;
    }

    cout << ans << '\n';
    return 0;
}
