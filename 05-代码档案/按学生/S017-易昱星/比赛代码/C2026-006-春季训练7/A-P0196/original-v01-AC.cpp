#include <bits/stdc++.h>
using namespace std;
int a[53];
bool vis[53];
int n;
int top = 0;
void dfs(int u) {
    if (top == n) return ;
    if (u == n + 1) {
        for (int i = 1; i <= n; i ++){
            cout<<a[i]<<" ";
        }
        cout<<"\n"; 
        top ++;
        if (top == n) return ;
    }
    for (int i = 1; i <= n; i ++) if (! vis[i] && (u < 3 || a[u - 2] + a[u - 1] != i)) {
        vis[i] = true;
        a[u] = i;
        dfs(u + 1);
        vis[i] = false;
    }
}

signed main() {
    int t;
    cin >> t;
    while (t --){
        top = 0;
        cin >> n;
        dfs(1);
    }
    return 0;
}