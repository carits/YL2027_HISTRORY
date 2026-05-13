#include <bits/stdc++.h>

using namespace std;

void work()
{
  int n;
  string s;
  stack<int> stk;
  cin >> n >> s;
  
  for(int i = 0; i < n; i ++)
  {
    if(stk.empty() == 0 && s[i] == stk.top())
    {
      stk.pop();
    }
    else stk.push(s[i]);
  }
  
  if(stk.empty() == 1)
    cout << "YES\n";
  else cout << "NO\n";
}

int main()
{
  int t;
  cin >> t;
  while(t --)
  {
    work();
  }
  return 0;
}