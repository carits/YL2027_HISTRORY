#include <bits/stdc++.h>

using namespace std;

long long T, n, a[301];
long long ans;
map<int, bool> ap;
inline bool check(long long x) 
{
  for (int i = 2; i <= sqrt(x); i++)
    if (x % i == 0 && (!ap[i] || !ap[x / i]))
      return 0;
  return 1;
}
int main() 
{
  cin >> T;
  while (T--) 
  {
    ap.clear();
    cin >> n;
    long long pr = 1e17, minnum = 1e17, maxnum = -1e17;
    for (int i = 1; i <= n; i++)
      cin >> a[i], ap[a[i]] = 1;
    sort(a + 1, a + n + 1);
    ans = a[1] * a[n];
    if(!check(ans)) ans = -1;
    for(int i = 2; i < n; i++)
      if(a[i] * a[n - i + 1] != a[i - 1] * a[n - i + 2])
        ans = -1;
    cout << ans << '\n';
  }
  return 0;
}