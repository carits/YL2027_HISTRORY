#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, t = 240, ans = 0, sum = 0;
    cin >> n >> k;
    t -= k;
    for(int i = 1; i <= n; i++){
        sum += 5 * i;
        if(sum <= t) ans = i;
    }
    cout << ans << "\n";
    return 0;
}
