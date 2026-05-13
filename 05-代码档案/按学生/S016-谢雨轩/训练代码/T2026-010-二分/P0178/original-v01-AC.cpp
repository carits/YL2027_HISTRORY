#include<bits/stdc++.h>
using namespace std;
int q;
long long k,n,a,b;
int main(){
	cin>>q;
	for (int i=1;i<=q;i++){
		int ans=0;
		cin>>k>>n>>a>>b;
		if(k-n*b<1){
			cout<<"-1"<<endl;
			continue;
		}
		int l=1,r=n;
		while(l<=r){
			int mid=(l+r)/2;
			long long u=mid*a+(n-mid)*b;
			if(k>u){
				l=mid+1;
				ans=mid;
			}
			else{
				r=mid-1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}