#include <bits/stdc++.h>
using namespace std;
int n, m, l, r, d[1000005];
bool a;
int main(){
    cin >> n >> m;
    for (int i = 1; i <= m; i++){
        cin >> l >> r;
        if (l == 0) a = 1;
        d[l] += 1;
        d[r + 1] -= 1;
    }
   int cnt = 0;
    for (int i = 1; i <= n; i++){
        d[i] += d[i - 1];
        if (d[i] == 0)cnt++;
    }
    if (!a) cnt++;
    cout << cnt;
    return 0;
}