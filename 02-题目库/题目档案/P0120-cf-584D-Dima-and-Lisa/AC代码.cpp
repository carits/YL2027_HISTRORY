#include <bits/stdc++.h>
using namespace std;
using u64 = unsigned long long;
using u128 = __uint128_t;

u64 mod_pow(u64 a, u64 e, u64 mod) {
    u64 r = 1;
    while (e) {
        if (e & 1) r = (u128)r * a % mod;
        a = (u128)a * a % mod;
        e >>= 1;
    }
    return r;
}

bool isPrime(u64 n) {
    if (n < 2) return false;
    for (u64 p : {2ULL, 3ULL, 5ULL, 7ULL, 11ULL, 13ULL, 17ULL, 19ULL, 23ULL, 29ULL, 31ULL, 37ULL}) {
        if (n % p == 0) return n == p;
    }
    u64 d = n - 1, s = 0;
    while ((d & 1) == 0) d >>= 1, s++;
    for (u64 a : {2ULL, 3ULL, 5ULL, 7ULL, 11ULL, 13ULL}) {
        if (a >= n) continue;
        u64 x = mod_pow(a, d, n);
        if (x == 1 || x == n - 1) continue;
        bool comp = true;
        for (u64 r = 1; r < s; r++) {
            x = (u128)x * x % n;
            if (x == n - 1) {
                comp = false;
                break;
            }
        }
        if (comp) return false;
    }
    return true;
}

pair<long long, long long> split_even(long long n) {
    for (long long p = 2; p <= n; p++) {
        if (isPrime(p) && isPrime(n - p)) return {p, n - p};
    }
    return {0, 0};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    if (isPrime(n)) {
        cout << 1 << '\n' << n << '\n';
    } else if (n % 2 == 0) {
        auto [a, b] = split_even(n);
        cout << 2 << '\n' << a << ' ' << b << '\n';
    } else if (isPrime(n - 2)) {
        cout << 2 << '\n' << 2 << ' ' << n - 2 << '\n';
    } else {
        auto [a, b] = split_even(n - 3);
        cout << 3 << '\n' << 3 << ' ' << a << ' ' << b << '\n';
    }
    return 0;
}
