#include <bits/stdc++.h>

using namespace std;

int Dg(int cnt, int step)
{
  if(step == 0)
  {
    return cnt;
  }
  Dg((cnt - 1) * 2, step - 1);
}

int main()
{
  int t;
  cin >> t;

  while(t --)
  {
    int x;
    cin >> x;
    cout << Dg(3, x) << "\n";
  }
  return 0;
}