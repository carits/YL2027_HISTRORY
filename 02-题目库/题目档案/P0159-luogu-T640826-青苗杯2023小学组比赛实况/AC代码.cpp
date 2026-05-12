#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<long long> score(n + 1, 0);
    map<long long, int> cnt;
    cnt[0] = n;
    for (int i = 0; i < m; i++) {
        int p;
        long long v;
        cin >> p >> v;
        long long old = score[p];
        if (--cnt[old] == 0) cnt.erase(old);
        score[p] += v;
        cnt[score[p]]++;
        if (i) cout << ' ';
        cout << cnt.rbegin()->first - cnt.begin()->first;
    }
    cout << '\n';
    return 0;
}
