#include <bits/stdc++.h>
using namespace std;
int x, ans, a[25], b[25], p[25];
bool f[25];
void dfs(int step){
    if(step > x){
        ans++;
        return;
    }
    if(!f[a[step]]){
        f[a[step]] = true;
        p[step] = a[step];
        dfs(step + 1);
        f[a[step]] = false;
    }
    if(!f[b[step]]){
        f[b[step]] = true;
        p[step] = b[step];
        dfs(step + 1);
        f[b[step]] = false;
    }
}
int main(){
    cin >> x;
    for(int i = 1; i <= x; i++)
        cin >> a[i] >> b[i];
    dfs(1);
    cout << ans;
    return 0;
}