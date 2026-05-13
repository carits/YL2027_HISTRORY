#include<bits/stdc++.h>
#define int long long  
using namespace std;
int a[100005];
int n,k,x,y;
void mq(int l,int r){
	int i=l,j=r,mid=a[(l+r)/2];
	while(i<=j){
		while(a[i]<mid){
			i++;
		}
		while(a[j]>mid){
			j--;
		}
		if(i<=j){
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}
	if(k<=j){
		mq(l,j);
	}else if(k>=i){
		mq(i,r);
	}else {
		return ;
	}
}
signed main(){
	ios::sync_with_stdio(false);
	cin>>n>>k>>x>>y;
	a[0]=1;
	for(int i=1;i<=n;i++){
		a[i]=(a[i-1]*x+y)%1000000007;
	}
	mq(1,n);
//	sort(a+1,a+n+1);
	cout<<a[k];
	return 0;
}