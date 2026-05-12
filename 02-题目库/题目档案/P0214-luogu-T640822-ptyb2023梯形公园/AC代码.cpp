#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<double> a(4);
    for (double &x : a) cin >> x;
    double best = -1;
    for (int u = 0; u < 4; u++) {
        for (int l = 0; l < 4; l++) {
            if (u == l || a[u] >= a[l]) continue;
            vector<int> rem;
            for (int i = 0; i < 4; i++) if (i != u && i != l) rem.push_back(i);
            double top = a[u], bottom = a[l], p = a[rem[0]], q = a[rem[1]];
            double d = bottom - top;
            if (d <= 0) continue;
            if (p + q <= d || fabs(p - q) >= d) continue;
            double alpha = (p * p - q * q + d * d) / (2 * d);
            double beta = d - alpha;
            if (alpha < -1e-9 || beta < -1e-9) continue;
            double h2 = p * p - alpha * alpha;
            if (h2 <= 1e-9) continue;
            double h = sqrt(max(0.0, h2));
            best = max(best, (top + bottom) * h / 2);
        }
    }
    if (best < 0) cout << "Impossible!\n";
    else cout << fixed << setprecision(3) << best + 1e-9 << '\n';
    return 0;
}
