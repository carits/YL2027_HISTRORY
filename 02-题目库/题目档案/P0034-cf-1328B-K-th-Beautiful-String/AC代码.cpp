#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        ll k;
        cin >> n >> k;
        string s(n, 'a');
        ll len = 1;
        while (k > len) {
            k -= len;
            len++;
        }
        s[n - len - 1] = 'b';
        s[n - k] = 'b';
        cout << s << '\n';
    }
    return 0;
}
