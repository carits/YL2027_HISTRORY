#include<bits/stdc++.h>
using namespace std;
long long a[100005];
long long cnt=0;
void gb(long long l,long long r){
	if(r-l<=1){
		return ;
	}
	long long mid=(l+r)/2;
	gb(l,mid);
	gb(mid+1,r);
	sort(a+l,a+l+mid);
	sort(a+mid+1,a+r);
	
	for(int i=mid+1;i<=r;i++){
		long long j=mid;
		while(a[i]<a[j]){
			j--;
			cnt++;
		}
	}
	return ;
}
int main(){
	long long n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	gb(1,n);
	cout<<cnt;
	return 0;
}