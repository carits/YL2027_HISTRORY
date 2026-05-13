// 狂狼电竞俱乐部 | 胖头鱼
#include <bits/stdc++.h>

using namespace std;

ifstream fin("calculate.in");
ofstream fout("calculate.out");

const int kMaxN = 1e5 + 1;

long long a[kMaxN], w[kMaxN], b[kMaxN], c, n;
string s;

int main() {
  fin >> n;
  for (int i = 0; i < n; i++) {
    fin >> a[i];
    w[i] = i ? w[i - 1] * a[i - 1] : 1;  // 计算位权
  }
  fin >> s;
  for (int i = 0; i < s.size(); i++) {
    b[i] = s[s.size() - 1 - i] - '0';  // 翻转并转换成数值存储到对应位中
  }
  fin >> s;
  for (int i = 0; i < s.size(); i++) {
    c += (s[s.size() - 1 - i] - '0') * w[i];  // 翻转并转换成数值，乘以位权累加到总和中
  }
  for (int i = 0; i < n; i++) {  // 将每一位都乘以数量 c
    b[i] *= c;
  }
  for (int i = 0; i < n; i++) {  // 由低位到高位进位
    b[i + 1] += b[i] / a[i];
    b[i] %= a[i];
  }
  for (; n && !b[n]; n--) {  // 找到最高非 0 位
  }
  for (; n >= 0; n--) {  // 由高位到低位输出
    fout << b[n];
  }
  return 0;
}