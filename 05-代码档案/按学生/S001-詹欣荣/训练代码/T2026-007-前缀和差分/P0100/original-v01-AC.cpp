#include<bits/stdc++.h> 
using namespace std;
int a[10000005];
int cf[10000005];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cf[i]=a[i]-a[i-1];
	}
	for(int i=1;i<=m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		cf[x]+=z;
		cf[y+1]-=z;		
	}
	int minn=INT_MAX;
	for(int i=1;i<=n;i++){
		a[i]=a[i-1]+cf[i];
		minn=min(minn,a[i]);
	}
	cout<<minn;
	return 0;
}