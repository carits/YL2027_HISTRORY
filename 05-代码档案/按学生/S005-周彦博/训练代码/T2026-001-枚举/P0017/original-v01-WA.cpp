#include <bits/stdc++.h>
using namespace std;
int n, a, b, c, maxn = -1e9;
int main(){
    cin >> n >> a >> b >> c;
    for (int i = 0; i <= n / a; i++){
        for (int j = 0; j <= n / b; j++){
            if ((n - (a * i + b * j)) % c == 0) maxn = max(maxn, i + j + (n - (a * i + b * j)) / c);
        }
    }
    cout << maxn;
    return 0;
}