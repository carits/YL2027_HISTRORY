#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int t;
  cin >> t;
  
  while (t--) 
  {
    int n, s, x;
    cin >> n >> s >> x;
    
    int sum_a = 0;
    for (int i = 0; i < n; i++) 
    {
      int num;
      cin >> num;
      sum_a += num;
    }
    
    if (s < sum_a) 
    {
      cout << "NO\n";
    } else if ((s - sum_a) % x == 0) 
    {
      cout << "YES\n";
    } else 
    {
      cout << "NO\n";
    }
  }
  
  return 0;
}