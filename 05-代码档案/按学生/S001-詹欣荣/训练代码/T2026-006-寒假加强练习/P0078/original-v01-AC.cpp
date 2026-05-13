#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a,b;
		cin>>a>>b;
		int y=b;
		for(int j=1;j<=a;j++){
			y=y*2;
		}
		cout<<y<<endl;
	}
	return 0;
}