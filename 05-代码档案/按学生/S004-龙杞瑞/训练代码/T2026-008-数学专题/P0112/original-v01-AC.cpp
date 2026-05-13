#include<bits/stdc++.h>
using namespace std;
const int N=2e6+5;
int n,k,cnt,x,pc[N],ans[N],pre[N];
void init(int x){
	for(int i=2;i<=x;i++){
		if(pc[i]==0){
			ans[++cnt]=i;
			for(int j=2*i;j<=x;j+=i) pc[j]=1; 
		}
	}
}
int check(int x){
	if(x<2) return 0;
	for(int i=2;i*i<=x;i++){
		if(x%i==0) return 0;
	}
	return 1;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0); 
	cin>>n>>k;
	init(n);
	for(int i=1;i<=cnt;i++) pre[i]=ans[i-1]+ans[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=cnt;j++){
			if(check(i)&&pre[j]+1==i){
				x++;
				break;
			}
		}
	} 
	if(x>=k) cout<<"YES";
	else cout<<"NO"; 
	return 0;
}