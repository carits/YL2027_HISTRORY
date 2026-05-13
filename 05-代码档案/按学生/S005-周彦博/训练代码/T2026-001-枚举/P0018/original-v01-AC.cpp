#include <bits/stdc++.h>
using namespace std;
int n, a[5005], s[5005], maxn;
int main(){
    cin >> n;
    for (int i = 1;  i <= n; i++){
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    for (int l = 1; l <= n; l++){
        for (int r = l; r <= n; r++){
            maxn = max(s[r] - s[l - 1], maxn);
        }
    }
    cout << maxn;
    return 0;
}