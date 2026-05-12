#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q; cin >> q;
    while(q--){
        long long c,m,x;
        cin >> c >> m >> x;
        cout << min({c,m,(c+m+x)/3}) << '\n';
    }
    return 0;
}
