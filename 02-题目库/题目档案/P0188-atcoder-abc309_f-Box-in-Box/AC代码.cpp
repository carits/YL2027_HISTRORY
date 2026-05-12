#include <bits/stdc++.h>
using namespace std;

struct FenwickMin {
    int n;
    const int INF = 1e9 + 7;
    vector<int> tr;
    FenwickMin(int n = 0) { init(n); }
    void init(int n_) {
        n = n_;
        tr.assign(n + 1, INF);
    }
    void update(int x, int v) {
        for (; x <= n; x += x & -x) tr[x] = min(tr[x], v);
    }
    int query(int x) {
        int res = INF;
        for (; x > 0; x -= x & -x) res = min(res, tr[x]);
        return res;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<array<int, 3>> box(n);
    vector<int> ys;
    for (auto &b : box) {
        cin >> b[0] >> b[1] >> b[2];
        sort(b.begin(), b.end());
        ys.push_back(b[1]);
    }

    sort(ys.begin(), ys.end());
    ys.erase(unique(ys.begin(), ys.end()), ys.end());

    sort(box.begin(), box.end());

    FenwickMin bit(ys.size());
    for (int l = 0; l < n; ) {
        int r = l;
        while (r < n && box[r][0] == box[l][0]) r++;

        for (int i = l; i < r; i++) {
            int y = lower_bound(ys.begin(), ys.end(), box[i][1]) - ys.begin() + 1;
            if (bit.query(y - 1) < box[i][2]) {
                cout << "Yes\n";
                return 0;
            }
        }

        for (int i = l; i < r; i++) {
            int y = lower_bound(ys.begin(), ys.end(), box[i][1]) - ys.begin() + 1;
            bit.update(y, box[i][2]);
        }

        l = r;
    }

    cout << "No\n";
    return 0;
}
