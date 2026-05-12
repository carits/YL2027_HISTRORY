#include <bits/stdc++.h>
using namespace std;

bool ok(int x) {
    string s = to_string(x);
    set<char> st(s.begin(), s.end());
    return st.size() == s.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y;
    cin >> y;

    while (true) {
        y++;
        if (ok(y)) {
            cout << y << '\n';
            return 0;
        }
    }
}
