#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, sum, a[N];
int main(){
    freopen("friends.in", "r", stdin);
    freopen("friends.out", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++)
        sum += a[i];
    for(int i = 1; i <= n; i++)
        cout << sum / i << ' ';
    return 0;
}
