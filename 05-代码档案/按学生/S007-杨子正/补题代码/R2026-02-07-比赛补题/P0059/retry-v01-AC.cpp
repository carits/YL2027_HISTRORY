#include <bits/stdc++.h>

using namespace std;

string work(int x) 
{
  if (x > 45) return "-1";
  vector<int> di;
  for (int d = 9; d >= 1 && x > 0; d--) 
  {
    if (d <= x) 
    {
      di.push_back(d);
      x -= d;
    }
  }
  reverse(di.begin(), di.end());
  
  string res;
  for (int d : di) 
  {
    res += (char)('0' + d);
  }
  return res;
}

int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    int x;
    cin >> x;
    cout << work(x) << "\n";
  }
  return 0;
}