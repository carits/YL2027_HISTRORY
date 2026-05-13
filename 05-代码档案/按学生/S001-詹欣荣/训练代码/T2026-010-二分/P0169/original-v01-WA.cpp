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
	int sum=0;
	for(int i=1;i<=m;i++){
		cin>>b[i];
		int pos=lower_bound(a+1,a+n+1,b[i])-a;
		sum+=min(abs(b[i]-a[pos]),abs(b[i]-a[pos-1]));
	}
	cout<<sum;
	return 0;
}