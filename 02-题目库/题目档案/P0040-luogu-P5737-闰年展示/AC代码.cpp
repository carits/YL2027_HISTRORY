#include <bits/stdc++.h>
using namespace std;

bool leap(int y) {
    return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    vector<int> ans;
    for (int i = x; i <= y; i++) if (leap(i)) ans.push_back(i);
    cout << ans.size() << '\n';
    for (int v : ans) cout << v << ' ';
    cout << '\n';
    return 0;
}
