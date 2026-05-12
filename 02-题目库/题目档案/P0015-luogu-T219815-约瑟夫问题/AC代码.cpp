#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s, m;
    cin >> n >> s >> m;
    vector<int> a(n);
    iota(a.begin(), a.end(), 1);
    int pos = s - 1;
    for (int cnt = 0; cnt < n; cnt++) {
        pos = (pos + m - 1) % a.size();
        if (cnt) cout << ' ';
        cout << a[pos];
        a.erase(a.begin() + pos);
        if (!a.empty()) pos %= a.size();
    }
    cout << '\n';
    return 0;
}
