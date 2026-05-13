#include <bits/stdc++.h>
using namespace std;
string s , t;
int Q , n;
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> Q;
  while (Q--)
  {
    cin >> n >> s >> t;
    int sum=0;
    for (int i=0;i<=n-1;i++)
    {
      if ((s[i]=='0'&&t[i]=='1')||(s[i]=='1'&&t[i]=='0'))
      {
        sum+=2;
      }
      else if (s[i]=='0'&&t[i]=='0')
      {
        if (s[i+1]=='1'&&t[i+1]=='1')
        {
          sum+=2;
          i++;
        }
        else
        {
          sum++;
        }
      }
      else
      {
        if (s[i+1]=='0'&&t[i+1]=='0')
        {
          sum+=2;
          i++;
        }
      }
    }
    cout << sum << "\n";
  }
  return 0;
}