#include <bits/stdc++.h>
using namespace std;
#define int long long
//江鑫诚牛逼
//再也不见，伍一鸣，bouncy hunter!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! 
int n,a[100010];
signed main() {	
	freopen("friends.in", "r", stdin);
	freopen("friends.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(n%i==0) cout<<n/i<<" ";
		else cout<<"1 ";
	}
	return 0;
}
