#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,ans,cnt,a[N],pre[N];
signed main(){
	cin>>n;
	pre[0]=1e9;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pre[i]=min(pre[i-1],a[i]);	
	}
	for(int i=1;i<=n;i++){
		 ans+=a[i];
		 cnt++;
		 if(ans<0){
		 	ans-=pre[i];
		 	cnt--;
		 }
	}
	cout<<cnt;
	return 0;
}