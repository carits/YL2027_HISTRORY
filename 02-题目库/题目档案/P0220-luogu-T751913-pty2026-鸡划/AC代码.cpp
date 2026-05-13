// 狂狼电竞俱乐部 | 胖头鱼
#include <bits/stdc++.h>

using namespace std;

ifstream fin("plan.in");
ofstream fout("plan.out");

const int kMaxN = 1e5 + 1, kMaxM = 10;

int a[kMaxN], c[1 << kMaxM], n, m, ans;
long long t, k;

void A(int x, int v) {                // 值 x 的数量增加 v
  for (int i = 0; i < 1 << m; i++) {  // 枚举所有值 i
    t += v * !(x & i) * c[i];         // 如果与 x 的交集为空则累加数量
  }
}

int main() {
  fin >> n >> m >> k;
  for (int i = 1, x, y; i <= n; i++) {
    for (fin >> x; x--;) {
      fin >> y;
      a[i] |= 1 << y - 1;  // 压缩表示兴趣爱好
    }
  }
  for (int i = 1, j = 1; i <= n; i++) {         // 枚举右界 i
    A(a[i], 1), c[a[i]]++;                      // 增加元素
    for (; t >= k; c[a[j]]--, A(a[j++], -1)) {  // 不合法则调整左界 j 并减少元素
    }
    ans = max(ans, i - j);
  }
  fout << ans + 1;
  return 0;
}