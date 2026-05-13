#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k,sum,a[300010],b[300010];
signed main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i-1]=a[i]-a[i-1];
	}
	sort(b+1,b+n);
	for(int i=1;i<=n-k;i++) sum+=b[i];
	cout<<sum;
	return 0;
}