#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        sum += x;
        pq.push(x);
        if (sum < 0) {
            sum -= pq.top();
            pq.pop();
        }
    }
    cout << pq.size() << '\n';
    return 0;
}
