#include<bits/stdc++.h>
using namespace std;
int t, k;
long long a[100005];
void so(){
	a[0] = 1;
	for(int i = 1; i < 1e5; i++) a[i] = (a[i-1] * 2) % 1000000007;
}
int main(){
	cin >> t;
	so();
	for(int i = 1; i <= t; i++) cin >> k;
	for(int i = 1; i <= t; i++)
	{
		cin >> k;
		cout << a[k] << "\n";
	}
	return 0;
}