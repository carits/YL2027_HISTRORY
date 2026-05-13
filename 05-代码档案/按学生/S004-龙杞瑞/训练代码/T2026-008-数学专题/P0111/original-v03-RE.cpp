#include<bits/stdc++.h>
using namespace std;
const int N=2e6+5;
int n,k,cnt,pc[N],ans[N];
void init(int x){
	for(int i=2;i<=x;i++){
		if(pc[i]==0){
			ans[++cnt]=i;
			for(int j=i*i;j<=x;j+=i) pc[j]=1; 
		}
	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0); 
	cin>>n;
	init(2e6);
	for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
	return 0;
}