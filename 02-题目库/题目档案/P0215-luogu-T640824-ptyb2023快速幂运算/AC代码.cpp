#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll parse_base(const string &s, int k) {
    ll x = 0;
    for (char c : s) x = x * k + (c - '0');
    return x;
}

ll mod_pow(ll a, ll b, ll mod) {
    if (mod == 1) return 0;
    ll r = 1 % mod;
    a %= mod;
    while (b) {
        if (b & 1) r = (__int128)r * a % mod;
        a = (__int128)a * a % mod;
        b >>= 1;
    }
    return r;
}

string to_base(ll x, int k) {
    if (x == 0) return "0";
    string s;
    while (x) {
        s.push_back(char('0' + x % k));
        x /= k;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    string A, M, N;
    cin >> k >> A >> M >> N;
    ll a = parse_base(A, k);
    ll mod = parse_base(M, k);
    ll res = 1 % mod;
    ll base = a % mod;
    for (char c : N) {
        int d = c - '0';
        res = mod_pow(res, k, mod) * mod_pow(base, d, mod) % mod;
    }
    cout << to_base(res, k) << '\n';
    return 0;
}
