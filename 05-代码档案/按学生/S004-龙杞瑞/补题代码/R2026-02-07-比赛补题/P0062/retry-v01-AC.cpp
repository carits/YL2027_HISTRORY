#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,cnt,a[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		if(a[i]<cnt+1) continue;
		else cnt++;
	}
	cout<<cnt;
	return 0;
}