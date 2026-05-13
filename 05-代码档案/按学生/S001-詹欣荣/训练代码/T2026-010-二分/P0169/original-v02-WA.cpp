#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int b[1000005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	long long sum=0;
	for(int i=1;i<=m;i++){
		cin>>b[i];
		int l = 1, r = n;
		while (l < r) {
			int m = l + (r - l) / 2;
			if (a[m]>b[i]) {
				r = m;
			}
			else {
				l = m + 1;
			}
		}
		sum+=min(abs(b[i]-a[l]),abs(b[i]-a[l-1]));
	}
	cout<<sum;
	return 0;
}