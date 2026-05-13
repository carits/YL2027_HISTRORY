#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int maxn = 0;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            maxn = max(maxn, a[j]);
        }
        sort(a.begin(), a.end());
        
        if (n == 1) {
            cout << a[0] * a[0] << "\n";
            continue;
        }
        
        // 候选的 l 是最大元素乘以某个因子
        // 实际上 l 必须是 maxn 的倍数，且所有 a 都是 l 的因子
        // 那么 l 必须是所有 a 的公倍数，候选就是 a 中的最大值乘以最小值？不，直接计算所有数的LCM
        int l_candidate = a[0];
        bool overflow = false;
        for (int j = 1; j < n; j++) {
            l_candidate = lcm(l_candidate, a[j]);
            if (l_candidate > 1e12) { // 防止溢出，并且题目中乘积可能很大
                overflow = true;
                break;
            }
        }
        
        if (overflow) {
            cout << "-1\n";
            continue;
        }
        
        // 检查这个候选值是否在数组中
        bool found = false;
        int l = -1;
        
        // 尝试两种可能：l_candidate 或 l_candidate * (第一个质数?) 
        // 实际上，如果 l_candidate 等于 maxn，那么需要乘以一个不在数组中的因子
        if (l_candidate == maxn) {
            // 找一个不在数组中的最小因子
            sort(a.begin(), a.end());
            for (int x = 2; x * x <= maxn; x++) {
                if (maxn % x == 0) {
                    if (!binary_search(a.begin(), a.end(), x)) {
                        l = maxn * x;
                        found = true;
                        break;
                    }
                    if (!binary_search(a.begin(), a.end(), maxn / x)) {
                        l = maxn * (maxn / x);
                        found = true;
                        break;
                    }
                }
            }
            if (!found) {
                // 尝试乘以一个质数
                for (int x = 2; x <= 100; x++) {
                    if (!binary_search(a.begin(), a.end(), x)) {
                        l = maxn * x;
                        found = true;
                        break;
                    }
                }
            }
        } else {
            // 检查 l_candidate 的所有因子是否都在数组中
            vector<int> factors;
            for (int x = 1; x * x <= l_candidate; x++) {
                if (l_candidate % x == 0) {
                    factors.push_back(x);
                    if (x != l_candidate / x) {
                        factors.push_back(l_candidate / x);
                    }
                }
            }
            sort(factors.begin(), factors.end());
            
            if (factors.size() == n + 1) { // 包含1和自身
                bool match = true;
                for (int j = 0; j < n; j++) {
                    if (j + 1 < factors.size() && a[j] != factors[j + 1]) {
                        match = false;
                        break;
                    }
                }
                if (match) {
                    l = l_candidate;
                    found = true;
                }
            }
        }
        
        if (found) {
            cout << l << "\n";
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}