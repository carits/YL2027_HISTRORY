#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,ans,a[N],pre[N];
priority_queue<int>q;
signed main(){
	cin>>n;
	pre[0]=1e9;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		 ans+=a[i];
		 q.push(-a[i]);
		 if(ans<0){
		 	ans-=-q.top();
		 	q.pop();
		 }
	}
	cout<<q.size();
	return 0;
}