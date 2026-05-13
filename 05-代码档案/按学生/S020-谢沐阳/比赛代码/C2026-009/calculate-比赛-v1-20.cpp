#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
long long n, b, c, a[N];
int main(){
    freopen("calculate.in", "r", stdin);
    freopen("calculate.out", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> b >> c;
    cout << b * c;
    return 0;
}
