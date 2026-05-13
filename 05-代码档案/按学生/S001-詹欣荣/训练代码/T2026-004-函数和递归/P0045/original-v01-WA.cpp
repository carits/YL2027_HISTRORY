#include<bits/stdc++.h>
using namespace std;
int a[100005];
long long sum[100005];
map<long long,vector<long long>>mp;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
		mp[a[i]].push_back(i);
	}
	long long maxn=LLONG_MIN,l,r;
	for(auto&j:mp){
		vector<long long>v=j.second;
		int si=v.size();
		if(si<2){
			continue;		
		}
		long long minf=sum[v[0]-1];
		long long pos=v[0];
		for(int i=1;i<si;i++){
			long long b=v[i];
			long long sumb=sum[b]-minf;
			if(sumb>maxn){
				maxn=sumb;
				l=pos;
				r=b;
			}
			if(sum[b-1]<minf){
			    minf=sum[b-1];
			    pos=b;
			}
		}
	}
	cout<<maxn<<" "<<l+n-r-1<<endl;;
	if(l+n-r-1>0){
		for(int i=1;i<l;i++){
			cout<<i<<" ";
		}
		for(int i=r+1;i<=n;i++){
			cout<<i<<" ";
		}
	}
	return 0;
}