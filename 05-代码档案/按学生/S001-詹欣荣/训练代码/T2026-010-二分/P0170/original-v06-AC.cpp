#include<bits/stdc++.h>
using namespace std;
long long a[100005];
long long b[100005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		cin>>b[i];
	}
	sort(b+1,b+m+1);
	for(int i=1;i<=n;i++){
		int l = 1, r = m;
		while (l < r) {
			int t = (l + r) / 2;
			if (a[i]<=b[t]) {
				r = t;
			}
			else {
				l = t + 1;
			}
		}
		//cout<<b[l]<<"/";
		if(a[i]==b[l]){
		  cout<<a[i]<<" ";
    } 
	}
	return 0;
}