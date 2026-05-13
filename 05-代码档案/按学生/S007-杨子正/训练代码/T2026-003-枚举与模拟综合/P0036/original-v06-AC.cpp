#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll a, b, ans = 0;

int main() 
{
	cin >> a >> b;
	ll sum = 2, i = 1, p = 0, j = 1;
	while (true) 
  {
		if (p == 0) 
    {
			j *= 2;
			p = j + 1;
		}
		if (sum < a);
		else if (sum > b)
    {
      break;
    } else
    {
      ans++;
    }
		sum += p;
		p /= 2;
	}
	cout << ans;
	return 0;
}