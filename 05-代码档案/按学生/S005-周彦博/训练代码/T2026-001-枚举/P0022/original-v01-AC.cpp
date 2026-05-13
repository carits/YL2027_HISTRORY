#include <bits/stdc++.h>
using namespace std;
int k, n, w, sum;
int main(){
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++){
        sum += k * i;
    }
    if (sum - n < 0) cout << 0;
    else cout << sum - n;
    return 0;
}