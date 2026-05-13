#include <bits/stdc++.h>
#define int long long
using namespace std;
int x;
string cha (){
    for (int i = 1; i <= 1e4; i++){
        int dx = cbrt(x - i * i * i);
        if (dx == 0) continue;
        if (dx * dx * dx == x - i * i * i) return "YES\n";
    }
    return "NO\n";
}
signed main(){
int T;
    cin >> T;
    while(T--){
        cin >> x;
        cout << cha();
    }
    return 0;
}