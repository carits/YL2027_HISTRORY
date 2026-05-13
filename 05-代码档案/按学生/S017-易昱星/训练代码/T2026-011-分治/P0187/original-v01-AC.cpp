#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=1e6+10;
int n,cf[maxn],a[maxn],tr[maxn];
int first=maxn,end;
vector<int> v;
int lb(int i){//树状数组必备！！！
	return i&-i;
}
int ask(int r){//时间复杂度O(logr),查询
	if(r==0) return 0;
	return tr[r]+ask(r-lb(r));
}
void add(int p,int x){
	while(p<=n){
		tr[p]+=x;
		p+=lb(p);
	}
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];//输入
		//存入
		v.push_back(a[i]);
	}
	sort(v.begin(),v.end());//排序
	v.erase(unique(v.begin(),v.end()),v.end());//去重
	for(int i=1;i<=n;i++){//改a值
		a[i]=lower_bound(v.begin(),v.end(),a[i])-v.begin()+1;
	}
	for(int i=1;i<=n;i++){
		cf[a[i]]++;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		add(a[i],1);
		ans+=ask(n)-ask(a[i]);
	}
	cout<<ans;
	return 0;
}