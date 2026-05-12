#include <bits/stdc++.h>
using namespace std;

struct Carpet {
    int x, y, a, b;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Carpet> c(n);

    for (int i = 0; i < n; i++) {
        cin >> c[i].x >> c[i].y >> c[i].a >> c[i].b;
    }

    int X, Y;
    cin >> X >> Y;

    for (int i = n - 1; i >= 0; i--) {
        if (c[i].x <= X && X <= c[i].x + c[i].a &&
            c[i].y <= Y && Y <= c[i].y + c[i].b) {
            cout << i + 1 << '\n';
            return 0;
        }
    }

    cout << -1 << '\n';
    return 0;
}
