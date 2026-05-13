#include<bits/stdc++.h>
using namespace std;
const int N=2e6+5;
int n,k,cnt,sum,pc[N],a[N];
void init(int x){
	for(int i=2;i<=x;i++){
		if(pc[i]==0){
			a[++cnt]=i;
			for(int j=2*i;j<=x;j+=i) pc[j]=1; 
		}
	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0); 
	cin>>n;
	init(3000);
	for(int i=6;i<=n;i++){
		int t=i,ans=0;
		for(int j=1;j<=cnt;j++){
			int k=t; 
			while(t%a[j]==0) t/=a[j];
			if(k!=t)ans++; 
		}
		if(ans==2) sum++; 
	}
	cout<<sum;
	return 0;
}