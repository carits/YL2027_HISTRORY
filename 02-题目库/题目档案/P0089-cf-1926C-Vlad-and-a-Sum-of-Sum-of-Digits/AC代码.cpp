#include <bits/stdc++.h>
using namespace std;

int digit_sum(int x) {
    int s = 0;
    while (x) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int N = 200000;
    vector<int> ans(N + 1);
    for (int i = 1; i <= N; i++) ans[i] = ans[i - 1] + digit_sum(i);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << ans[n] << '\n';
    }
    return 0;
}
