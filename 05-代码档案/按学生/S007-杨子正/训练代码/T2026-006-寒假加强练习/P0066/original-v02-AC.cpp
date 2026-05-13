#include <bits/stdc++.h>

using namespace std;

const int MAXN = 200005;

int a[MAXN], b[MAXN], c[MAXN], m[MAXN];
long long pref[MAXN];

int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    int n, q;
    cin >> n >> q;
    
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    
    for (int i = 1; i <= n; i++) 
    {
      c[i] = max(a[i], b[i]);
    }
    
    m[n] = c[n];
    for (int i = n-1; i >= 1; i--) 
    {
      m[i] = max(c[i], m[i+1]);
    }
    pref[0] = 0;
    for (int i = 1; i <= n; i++) 
    {
      pref[i] = pref[i-1] + m[i];
    }
    
    while (q--) 
    {
      int l, r;
      cin >> l >> r;
      cout << pref[r] - pref[l-1] << " ";
    }
    cout << "\n";
  }
  
  return 0;
}