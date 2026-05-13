#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int n,m,spfa[N],occ[N];
bool on[N];
void sieve(){
	for(int i=2;i<N;i++)if(!spfa[i]){
		spfa[i]=i;
		if(i*i<N)for(int j=i*i;j<N;j+=i)if(!spfa[j])spfa[j]=i;
	}
}
int solve(int x,vector<int>&res){
	res.clear();
	while(x>1){
		int p=spfa[x];
		res.push_back(p);
		while(x%p==0)x/=p;
	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	sieve();
	cin>>n>>m;
	vector<int>tmp;
	while(m--){
		char op;
		int x;
		cin>>op>>x;
		solve(x,tmp);
		if(op=='+'){
			if(on[x]){
				cout<<"Already on\n";
				continue;
			}
			int bad=0;
			for(int i=0;i<tmp.size();i++)if(occ[tmp[i]]){bad=occ[tmp[i]];break;}
			if(bad){
				cout<<"Conflict with "<<bad<<"\n";
			}else{
				cout<<"Success\n";
				on[x]=1;
				for(int i=0;i<tmp.size();i++)occ[tmp[i]]=x;
			}
		}else{
			if(!on[x]){
				cout<<"Already off\n";
				continue;
			}
			cout<<"Success\n";
			on[x]=0;
			for(int i=0;i<tmp.size();i++)occ[tmp[i]]=0;
		}
	}
	return 0;
}