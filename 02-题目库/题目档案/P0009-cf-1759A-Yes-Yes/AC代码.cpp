#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string pat;
    for (int i = 0; i < 30; i++) pat += "Yes";

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        cout << (pat.find(s) != string::npos ? "YES" : "NO") << '\n';
    }

    return 0;
}
