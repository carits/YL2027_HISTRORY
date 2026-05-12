#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<pair<long long,long long>> a(n);
    for (auto &x : a) cin >> x.second >> x.first;
    sort(a.rbegin(), a.rend());
    priority_queue<long long, vector<long long>, greater<long long>> q;
    long long sum = 0, ans = 0;
    for (auto [b, t] : a) {
        q.push(t);
        sum += t;
        if ((int)q.size() > k) {
            sum -= q.top();
            q.pop();
        }
        ans = max(ans, sum * b);
    }
    cout << ans << '\n';
    return 0;
}
