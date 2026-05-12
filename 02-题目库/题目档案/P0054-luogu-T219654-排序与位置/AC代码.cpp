#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<long long, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    vector<int> pos(n);
    for (int i = 0; i < n; i++) pos[a[i].second] = i + 1;
    for (int i = 0; i < n; i++) {
        if (i) cout << ' ';
        cout << pos[i];
    }
    cout << '\n';
    return 0;
}
