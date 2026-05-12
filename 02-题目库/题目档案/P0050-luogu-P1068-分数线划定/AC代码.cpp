#include <bits/stdc++.h>
using namespace std;

struct Node {
    int id, score;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<Node> a(n);
    for (auto &x : a) cin >> x.id >> x.score;

    sort(a.begin(), a.end(), [](const Node &x, const Node &y) {
        if (x.score != y.score) return x.score > y.score;
        return x.id < y.id;
    });

    int k = m * 3 / 2;
    int line = a[k - 1].score;
    int cnt = 0;
    for (auto &x : a) if (x.score >= line) cnt++;

    cout << line << ' ' << cnt << '\n';
    for (auto &x : a) if (x.score >= line) cout << x.id << ' ' << x.score << '\n';
    return 0;
}
