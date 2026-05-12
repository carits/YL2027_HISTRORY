#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    set<char> st(s.begin(), s.end());
    cout << (st.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << '\n';

    return 0;
}
