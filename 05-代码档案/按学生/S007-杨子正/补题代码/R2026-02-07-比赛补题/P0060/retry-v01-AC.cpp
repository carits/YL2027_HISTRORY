#include <bits/stdc++.h>

using namespace std;

int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) 
  {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
    {
      cin >> v[i];
    }
    unordered_set<int> s;
    int st = n;
    for (int i = n - 1; i >= 0; i--) 
    {
      if (s.count(v[i])) 
      {
        break;
      }
      s.insert(v[i]);
      st = i;
    }
    cout << st << "\n";
  }
  return 0;
}