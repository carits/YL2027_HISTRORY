#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000005];
int h;
int main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	int l=1,r=400000;
	while(l<=r){
		int mid=(l+r)/2;
		long long d=0;
		for (int i=1;i<=n;i++){
			d+=max(a[i]-mid,0);
		}
		if(d>=m){
			l=mid+1;
			h=mid;
		}
		else{
			r=mid-1;
		}
	}
	cout<<h;
	return 0;
}