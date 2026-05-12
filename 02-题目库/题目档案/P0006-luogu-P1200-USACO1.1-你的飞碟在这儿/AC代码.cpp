#include <bits/stdc++.h>
using namespace std;

int calc(const string& s) {
    int res = 1;
    for (char c : s) {
        res = res * (c - 'A' + 1) % 47;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    cout << (calc(a) == calc(b) ? "GO" : "STAY") << '\n';
    return 0;
}
