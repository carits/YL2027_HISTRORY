#include <bits/stdc++.h>
using namespace std;
int n, likeBook[25][2];
long long ans = 0;
bool used[25];
void dfs(int i) {
    if (i > n) {
        ans++;
        return;
    }
    for (int t = 0; t < 2; t++) {
        int b = likeBook[i][t];
        if (!used[b]) {
            used[b] = true;
            dfs(i + 1);
            used[b] = false;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> likeBook[i][0] >> likeBook[i][1];
    dfs(1);
    cout << ans << '\n';
    return 0;
}
