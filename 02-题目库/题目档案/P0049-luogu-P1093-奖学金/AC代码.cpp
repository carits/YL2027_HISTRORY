#include <bits/stdc++.h>
using namespace std;

struct Stu {
    int id, chinese, total;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Stu> a(n);
    for (int i = 0; i < n; i++) {
        int c, m, e;
        cin >> c >> m >> e;
        a[i] = {i + 1, c, c + m + e};
    }
    sort(a.begin(), a.end(), [](const Stu &x, const Stu &y) {
        if (x.total != y.total) return x.total > y.total;
        if (x.chinese != y.chinese) return x.chinese > y.chinese;
        return x.id < y.id;
    });
    for (int i = 0; i < 5; i++) cout << a[i].id << ' ' << a[i].total << '\n';
    return 0;
}
