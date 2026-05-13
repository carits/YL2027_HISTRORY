#include<bits/stdc++.h>
using namespace std;
#define doubl long double
int t;
double a[200005];
void solve(){
	int n;
	double d, h, ans=0;
	cin>> n >> d >> h;
	for(int i = 1;i <= n;i++) cin >> a[i];
	for(int i = 2;i <= n;i++){
		if(a[i] - a[i - 1] > h) ans += d * h / 2.0;
		else {
			double dd = (h - (a[i] - a[i - 1])) * d / h;
			ans += (dd + d) * (a[i] - a[i - 1]) / 2.0;
		}
	}
	ans += d * h / 2.0;
	cout << ans << endl;
}
int main(){
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}