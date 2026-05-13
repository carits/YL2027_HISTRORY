#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, a, b, c, d, ans = 1e9;
int dx[2] = {0, 1};
int dy[2] = {1, 0};
void dfs(int x, int y, int sum){
    if(x == n && y == m){
        ans = min(ans, sum);
        return;
    }
    for(int i = 0; i < 2; i++){
        int xx = x + dx[i];
        int yy = y + dy[i];
        if(xx > n || yy > m) continue;
        if(xx > x)
            if((xx + yy) % 2 == 0) dfs(xx, yy, sum + c);
            else dfs(xx, yy, sum + a);
        else
            if((xx + yy) % 2 == 0) dfs(xx, yy, sum + d);
            else dfs(xx, yy, sum + b);
    }
}
signed main(){
    freopen("leg.in", "r", stdin);
    freopen("leg.out", "w", stdout);
    cin >> n >> m >> a >> b >> c >> d;
    dfs(0, 0, 0);
    cout << ans;
    return 0;
}
