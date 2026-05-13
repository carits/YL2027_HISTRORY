#include <bits/stdc++.h>

using namespace std;

const int kMaxN = 5005;
int k[kMaxN], s[kMaxN], id[kMaxN];

bool cmp(int a,int b)
{
  if (s[a] == s[b])
  {
    return k[a] < k[b];
  }
  return s[a] > s[b];
}

int main()
{
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
  {
    cin >> k[id[i] = i] >> s[i];
  }
  sort(id + 1, id + 1 + n, cmp);
  int f = s[id[int(m * 1.5)]], i;
  for (i = 1; s[id[i]] >= f; i++);
  cout << f << " " << i - 1 << "\n";
  for (i = 1; s[id[i]] >= f; i++)
  {
    cout << k[id[i]] << " " << s[id[i]] << "\n";
  }
  return 0;
}