#include <bits/stdc++.h>
using namespace std;
int t, n, a[15];
bool cmp (int a, int b){
    return a > b;
}
int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Cin >> t;
    while(t--){
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + n + 1, cmp);
        int maxn = a[1], cnt = 1;
        for (int i = 2; i <= n; i++){
            if (a[i] != maxn) break;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}