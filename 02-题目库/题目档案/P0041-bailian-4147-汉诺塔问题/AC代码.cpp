#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, char a, char b, char c) {
    if (n == 1) {
        cout << 1 << ':' << a << "->" << c << '\n';
        return;
    }
    hanoi(n - 1, a, c, b);
    cout << n << ':' << a << "->" << c << '\n';
    hanoi(n - 1, b, a, c);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    char a, b, c;
    cin >> n >> a >> b >> c;
    hanoi(n, a, b, c);
    return 0;
}
