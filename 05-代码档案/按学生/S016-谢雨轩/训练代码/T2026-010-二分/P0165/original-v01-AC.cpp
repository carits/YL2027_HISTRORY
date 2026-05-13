#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[1000005]={};
long long q; 
int main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=m;i++){
		cin>>q;
		long long l=1;
		long long r=n;
		long long s=-1;
		while(l<=r){
			long long mid=(l+r)/2;
			if(a[mid]==q){
				s=mid;
				r=mid-1;
			}
			else if(a[mid]>q){
				r=mid-1;
			}
			else{
				l=mid+1;
			}
		}
		cout<<s<<" ";
	}
	return 0;
}