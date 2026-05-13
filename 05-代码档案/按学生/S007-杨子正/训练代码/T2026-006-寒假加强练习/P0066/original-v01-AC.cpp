#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    vector<int> c(n);
    for (int i = 0; i < n; i++) 
    {
      c[i] = max(a[i], b[i]);
    }
    
    vector<int> m(n);
    m[n-1] = c[n-1];
    for (int i = n-2; i >= 0; i--) 
    {
      m[i] = max(c[i], m[i+1]);
    }
    vector<long long> pref(n+1, 0);
    for (int i = 0; i < n; i++) 
    {
      pref[i+1] = pref[i] + m[i];
    }
    
    while (q--) 
    {
      int l, r;
      cin >> l >> r;
      l--; r--;
      cout << pref[r+1] - pref[l] << " ";
    }
    cout << "\n";
  }
  
  return 0;
}