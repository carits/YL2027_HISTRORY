#include <bits/stdc++.h>
using namespace std;
long long a[10000005];
int main(){
	int n,k,x,y;
	cin>>n>>k>>x>>y;
	a[0]=1;
	for(int i=1;i<=n;i++){
		a[i]=(a[i-1]*x+y)%1000000007;
	}
	sort(a+1,a+n+1);
	cout<<a[k];
	return 0;
}