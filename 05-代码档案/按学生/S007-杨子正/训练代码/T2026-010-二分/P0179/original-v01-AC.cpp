#include <bits/stdc++.h>
using namespace std;
int n, a[100005], maxx, now1 = 1, now2 = 1;
int main ()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 2; i <= n; i++)
		if (a[i] == a[i - 1])
			now2++;
		else
        {
            maxx = max(maxx, min(now1, now2));
            now1 = now2;
            now2 = 1;
        }
	cout << max(maxx, min(now1, now2)) * 2;
	return 0;
}
