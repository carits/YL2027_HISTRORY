#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin >> t;
    while(t--){
        long long x, y;
        cin >> x >> y;
        bool flag = 0;
        for (long long i = x + 1; i < y; i++){
            if (__gcd(x, i) == 1 && __gcd(i, y) == 1){
                cout << i << '\n';
                flag = 1;
                break;
            }
        }
        if (!flag) cout << "-1\n";
    }
    return 0;
}