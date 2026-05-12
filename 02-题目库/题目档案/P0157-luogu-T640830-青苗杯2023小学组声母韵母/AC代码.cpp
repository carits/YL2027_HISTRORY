#include <bits/stdc++.h>
using namespace std;

pair<string, string> split_pinyin(const string &s) {
    if (s.rfind("zh", 0) == 0 || s.rfind("ch", 0) == 0 || s.rfind("sh", 0) == 0) {
        return {s.substr(0, 2), s.substr(2)};
    }
    string v = "aoeiuv";
    if (v.find(s[0]) != string::npos) return {"", s};
    return {s.substr(0, 1), s.substr(1)};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    auto x = split_pinyin(a);
    auto y = split_pinyin(b);
    int ans = 0;
    if (x.second == y.second) ans += 1;
    if (x.first == y.first) ans += 2;
    cout << ans << '\n';
    return 0;
}
