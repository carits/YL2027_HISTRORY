#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005];
long long h; 
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long l=1,r=100000000;
	while(l<=r){
		long long mid=(l+r)/2;
		long long d=mid;
		bool flag=1;
		for (int i=1;i<=n;i++){
			d+=a[i];
			if(d<=0){
				flag=0;
				break;
			}
		}
		if(flag){
			r=mid-1;
			h=mid;
		}
		else{
			l=mid+1;
		}
	}
	cout<<h;
	return 0;
}
