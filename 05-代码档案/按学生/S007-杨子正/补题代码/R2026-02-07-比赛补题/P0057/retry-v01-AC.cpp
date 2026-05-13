#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n, m, k;
  cin >> n >> m >> k;
  
  unordered_map<string, int> count;
  unordered_map<string, pair<int, int>> pos;
  
  for (int i = 1; i <= n; i++) 
  {
    string line;
    cin >> line;
    
    for (int j = 1; j <= m; j++) 
    {
      string cell = line.substr((j-1)*k, k);
      count[cell]++;
      if (pos.find(cell) == pos.end()) 
      {
        pos[cell] = {i, j};
      }
    }
  }
  
  for (const auto& [s, cnt] : count) 
  {
    if (cnt == 1) 
    {
      cout << pos[s].first << " " << pos[s].second << endl;
      break;
    }
  }
  return 0;
}