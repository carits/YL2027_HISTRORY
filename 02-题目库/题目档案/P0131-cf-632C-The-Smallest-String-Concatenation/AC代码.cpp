#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> s(n);
    for (auto &x : s) cin >> x;
    sort(s.begin(), s.end(), [](const string &a, const string &b) {
        return a + b < b + a;
    });
    for (auto &x : s) cout << x;
    cout << '\n';
    return 0;
}
