#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N=2e5+5;
int t,n,pre[N];
int check(int x){
	int sum=0;
	while(x){
		sum+=x%10;
		x/=10;
	}
	return sum;
}
signed main(){
	cin>>t;
	for(int i=1;i<=N;i++) pre[i]=pre[i-1]+check(i);
	while(t--){
		cin>>n;
		cout<<pre[n]<<'\n';
	}
	return 0;
}