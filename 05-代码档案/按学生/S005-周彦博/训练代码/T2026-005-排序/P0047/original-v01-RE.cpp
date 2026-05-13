#include <bits/stdc++.h>
using namespace std;
int a[10005];
int main()
{
	int n, cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)cin >> a[i];
	for (int i = 1; i <= n - 1; i++){
		for (int j = 1; j <= n - i; j++){
			if (a[j] > a[j + 1]){
				cnt++;
				swap (a[j] , a[j + 1]);
			}
		}
	}
	cout << cnt;
}