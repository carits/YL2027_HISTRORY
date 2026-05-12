#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long double L;
    cin >> L;
    long double x1, v1, d1, x2, v2, d2;
    cin >> x1 >> v1 >> d1;
    cin >> x2 >> v2 >> d2;
    long double u1 = d1 > 0.5 ? v1 : -v1;
    long double u2 = d2 > 0.5 ? v2 : -v2;
    long double P = 2 * L;
    const long double INF = 1e100;
    long double ans = INF;

    auto relax = [&](long double A, long double B) {
        if (fabsl(A) < 1e-18) return;
        long double center = -B / P;
        long long k0 = floor(center);
        for (long long k = k0 - 5; k <= k0 + 5; k++) {
            long double num = B + P * k;
            long double t = num / A;
            if (t >= -1e-12) ans = min(ans, max((long double)0, t));
        }
    };

    relax(u1 - u2, x2 - x1);
    relax(u1 + u2, -x1 - x2);

    if (ans == INF) cout << "Impossible!\n";
    else cout << fixed << setprecision(5) << (double)ans << '\n';
    return 0;
}
