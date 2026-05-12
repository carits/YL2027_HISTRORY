#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> dir(n);
    vector<string> name(n);
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> name[i];
    }

    int now = 0;
    while (m--) {
        int a, s;
        cin >> a >> s;
        s %= n;
        if (dir[now] == a) {
            now = (now - s + n) % n;
        } else {
            now = (now + s) % n;
        }
    }

    cout << name[now] << '\n';
    return 0;
}
