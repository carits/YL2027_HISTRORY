#include <bits/stdc++.h>

using namespace std;

const int kN = 15;

int a[kN];

void work()
{
  int n;
  bool flag = 0;
  cin >> n;
  for(int i = 1; i <= n; i ++)
    cin >> a[i];
    
  for(int i = 1; i < n; i ++)
  {
    if(a[i] > a[i + 1])
    {
      cout << "1\n";
      return;
    }
  }
  cout << n << "\n";
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