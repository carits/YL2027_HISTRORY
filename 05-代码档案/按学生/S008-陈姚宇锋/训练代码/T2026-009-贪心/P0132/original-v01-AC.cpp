#include <bits/stdc++.h>
using namespace std;
int t, n, a[100009], ans;
int main() 
{
	cin >> t;
	while (t--) 
	{
		cin >> n;
    	for (int i = 1; i <= 2 * n; i++) 
		{
      		cin >> a[i];
    	}
    	sort(a + 1, a + 2 * n + 1);
    	ans = 0;
    	for (int i = 1; i < n; i++) 
		{
      		ans += a[i + 1] - a[i]; 
    	}
    	for (int i = n + 1; i < 2 * n; i++) 
		{
      		ans += a[i + 1] - a[i];
	    }
	    cout << ans << "\n";
	    for (int i = 1; i <= n; i++) 
		{
	    	cout << a[i] << " " << a[i + n] << "\n";
	    }
  }
  return 0;
}