#include<bits/stdc++.h>
using namespace std;
int n,a[500005],tmp[500005];
long long f(int l,int r){
	if(l==r){
		return 0;
	}
	int mid=l+r>>1;
	long long ans=f(l,mid)+f(mid+1,r);
	int j=mid+1,i=l,k=l;
	while(j<=r&&i<=mid){
		if(a[i]>a[j]){
			tmp[k++]=a[j++];
			ans+=mid-i+1;
		}else{
			tmp[k++]=a[i++];
		}
	}
	while(i<=mid){
		tmp[k++]=a[i++];
	}
	while(j<=r){
		tmp[k++]=a[j++];
	}
	for(k=l;k<=r;k++){
		a[k]=tmp[k];
		tmp[k]=0;
	}
	return ans;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<f(1,n);
	return 0;
}