// 狂狼电竞俱乐部 | 胖头鱼
#include <bits/stdc++.h>

using namespace std;
using LL = long long;

ifstream fin("friends.in");
ofstream fout("friends.out");

const int kMaxN = 1e5 + 1;

LL a[kMaxN], b[kMaxN], c[kMaxN], d[kMaxN], n, m;

int main() {
  fin >> n;
  for (int i = 1; i <= n; i++) {
    fin >> a[i];
    a[i] += a[i - 1];  // 求前缀和
  }
  for (LL i = 1; i * i <= a[n]; i++) {  // 枚举 a[n] 的约数
    if (a[n] % i == 0) {
      b[++m] = i, b[++m] = a[n] / i;  // 记录约数
    }
  }
  m -= b[m] == b[m - 1];   // 去掉重复的平方根
  sort(b + 1, b + 1 + m);  // 排序
  for (int i = 1; i <= n; i++) {
    c[lower_bound(b + 1, b + 1 + m, __gcd(a[i], a[n])) - b]++;  // 满足 a[i] 是倍数的最大的 a[n] 的约数，累加数量
  }
  for (int i = 1; i <= m; i++) {          // 枚举每个约数
    for (int j = i + 1; j <= m; j++) {    // 枚举更大的约数
      c[i] += c[j] * (b[j] % b[i] == 0);  // 如果是倍数则累加数量
    }
    d[c[i]] = max(d[c[i]], b[i]);  // 更新段数为 c[i] 时可用的最大公约数
  }
  for (int i = n - 1; i >= 1; i--) {
    d[i] = max(d[i], d[i + 1]);  // 求后缀最大值
  }
  for (int i = 1; i <= n; i++) {
    fout << d[i] << ' ';
  }
  return 0;
}