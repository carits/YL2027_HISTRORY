#include <bits/stdc++.h>
using namespace std;
string s;
int q , n , maxn=0;
char k;
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> q;
	while (q--)
	{
	  cin >> n >> k >> s;
	  s+=s;
	  maxn=0;
	  for (int i=0;i<=n-1;i++)
	  {
	    if (s[i]==k)
	    {
	      int cnt=0 , v=i;
	      while (s[v]!='g')
	      {
	        cnt++;
	        v++;
        }
        maxn=max (maxn , cnt);
        i=v;
      }
    }
    cout << maxn << "\n";
  }
	return 0;
}