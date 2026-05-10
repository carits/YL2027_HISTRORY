#include <bits/stdc++.h>
using namespace std;
int main(){
    int l, m;
    cin >> l >> m;
    vector<int> vis(l + 1, 0);
    while(m--){
        int a, b;
        cin >> a >> b;
        for(int i = a; i <= b; i++) vis[i] = 1;
    }
    int ans = 0;
    for(int i = 0; i <= l; i++) if(!vis[i]) ans++;
    cout << ans << "\n";
    return 0;
}
