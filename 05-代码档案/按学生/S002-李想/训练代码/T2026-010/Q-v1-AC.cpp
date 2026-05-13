#include<iostream>
using namespace std;

const int N=1e5+5;
int n,k,ans;
int a[N];
bool check(int step){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=a[i]/step;
	}
	if(sum>=k)ans=step;
	return sum>=k;
}
int main(){
	cin>> n >> k;
	for(int i=1;i<=n;i++)cin>> a[i];
	int l=1,r=1e8;
	while(l<=r){
		int mid=(r+l)/2;
		if(check(mid))l=mid+1;
		else r=mid-1;
	}
	cout<< ans;
	return 0;
}