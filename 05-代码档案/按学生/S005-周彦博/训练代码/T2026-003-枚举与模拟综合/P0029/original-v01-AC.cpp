#include <bits/stdc++.h>
using namespace std;
int n, a[1005], b[200005], maxn = -1e9;
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++) for (int j = i + 1; j <= n; j++) b[a[i] + a[j]]++;
    for (int i = 1; i <= 200000; i++) maxn = max(maxn, b[i]);
    cout << maxn;
    return 0;
}