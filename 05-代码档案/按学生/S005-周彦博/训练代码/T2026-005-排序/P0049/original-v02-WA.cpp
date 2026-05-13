#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int n, cnt = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
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