#include<bits/stdc++.h>
using namespace std;
const int maxn=1e7+10;
int shu[maxn],pri[maxn],minp[maxn],cnt;
int T,n,a,b[maxn],num,siz;
map<int,int>m;
void calc(int x){
	while(minp[x]>1) ++m[minp[x]],x/=minp[x];
	if(x>1) ++m[x];
}
int main(){
	for(int i=2;i<=maxn;++i){
		if(!shu[i]) pri[++cnt]=i,minp[i]=i;
		for(int j=1;j<=cnt&&pri[j]*i<=maxn;++j){
			minp[pri[j]*i]=pri[j],shu[pri[j]*i]=1;
			if(i%pri[j]==0) break;
		}
	}
	cin>>T;
	while(T--){
		cin>>n,m.clear(),cnt=siz=0;
		for(int i=1;i<=n;++i) cin>>a,calc(a);
		for(auto i:m){
			cnt+=i.second/2;
			if(i.second%2) ++siz;
		}
		cnt+=siz/3;
		cout<<cnt<<"\n";
	}
}