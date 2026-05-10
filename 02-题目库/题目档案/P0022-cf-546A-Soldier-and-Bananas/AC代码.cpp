#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, n, w;
    cin >> k >> n >> w;
    int need = k * w * (w + 1) / 2;
    cout << max(0, need - n) << "\n";
    return 0;
}
