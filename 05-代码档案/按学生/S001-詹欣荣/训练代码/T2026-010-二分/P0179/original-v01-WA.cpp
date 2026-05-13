#include<bits/stdc++.h>
using namespace std;
int a[100005];
int b[100005];
int c[100005];
int main(){
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=a[i-1]){
			cnt++;
			b[cnt]=i;
		}
		//cout<<b[cnt]<<" ";
	}
	if(b[cnt]!=n){
		cnt++;
		b[cnt]=n+1;
		//cout<<b[cnt]<<" ";
	}
	for(int i=2;i<=cnt;i++){
		c[i]=b[i]-b[i-1];
		//cout<<c[i]<<" ";
	}
	int maxn=0;
	for(int i=3;i<=cnt-1;i++){
		maxn=max(maxn,c[i]);
	}
	cout<<maxn*2;
	return 0;
}