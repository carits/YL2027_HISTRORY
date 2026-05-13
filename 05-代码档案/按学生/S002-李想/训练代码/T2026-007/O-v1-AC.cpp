#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,mx;
int const N=4e5+5;
int a[N],b[N],cha[N],sum[N],ans[N];
vector<int>v;
signed main(){
	cin>> n;
	for(int i=1;i<=n;i++){
		cin>> a[i] >> b[i];
		v.push_back(a[i]),v.push_back(b[i]+1);
	}
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	for(int i=1;i<=n;i++){
		a[i]=lower_bound(v.begin(),v.end(),a[i])-v.begin();
		b[i]=lower_bound(v.begin(),v.end(),b[i]+1)-v.begin();
		cha[a[i]]++,cha[b[i]]--;
	}
	sum[0]=cha[0];
	for(int i=0;i<v.size();i++){
		if(i!=0)sum[i]=sum[i-1]+cha[i];
		if(i!=v.size()-1)ans[sum[i]]+=v[i+1]-v[i];
	}
	for(int i=1;i<=n;i++)cout<< ans[i] << " ";
	return 0;
}