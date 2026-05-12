#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int H, W, N;
vector<ll> a;
ll ans = 0;
void dfs(int idx, int mask, ll xr) {
    while (idx < N && (mask >> idx & 1)) idx++;
    if (idx == N) {
        ans = max(ans, xr);
        return;
    }
    dfs(idx + 1, mask | (1 << idx), xr ^ a[idx]);
    int r = idx / W, c = idx % W;
    if (c + 1 < W) {
        int j = idx + 1;
        if (!(mask >> j & 1)) dfs(idx + 1, mask | (1 << idx) | (1 << j), xr);
    }
    if (r + 1 < H) {
        int j = idx + W;
        if (!(mask >> j & 1)) dfs(idx + 1, mask | (1 << idx) | (1 << j), xr);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> H >> W;
    N = H * W;
    a.resize(N);
    for (int i = 0; i < N; i++) cin >> a[i];
    dfs(0, 0, 0);
    cout << ans << '\n';
    return 0;
}
