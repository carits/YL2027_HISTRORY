#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) 
    {
      cin >> p[i];
    }
    int k = -1;
    for (int i = 0; i < n; i++) 
    {
      if (p[i] != n - i) 
      {
        k = i;
        break;
      }
    }
    
    if (k == -1) 
    {
      for (int x : p) cout << x << " ";
      cout << "\n";
      continue;
    }
    int target = n - k;
    int pos = -1;
    for (int i = 0; i < n; i++) 
    {
      if (p[i] == target) 
      {
        pos = i;
        break;
      }
    }
    reverse(p.begin() + k, p.begin() + pos + 1);
    
    for (int x : p) cout << x << " ";
    cout << "\n";
  }
  
  return 0;
}