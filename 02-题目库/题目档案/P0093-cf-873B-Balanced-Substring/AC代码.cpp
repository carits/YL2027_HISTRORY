#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    unordered_map<int, int> first;
    first.reserve(2 * n + 5);
    int pre = 0, ans = 0;
    first[0] = 0;
    for (int i = 1; i <= n; i++) {
        pre += (s[i - 1] == '1' ? 1 : -1);
        if (first.count(pre)) ans = max(ans, i - first[pre]);
        else first[pre] = i;
    }
    cout << ans << '\n';
    return 0;
}
