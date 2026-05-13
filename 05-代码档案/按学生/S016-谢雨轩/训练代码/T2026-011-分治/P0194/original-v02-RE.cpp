#include<bits/stdc++.h>
using namespace std;
int n,k,a,b;
long long y,s[100005];
void mi(){
	int s=1;
	int a=2;
	while(n){
		if(n&1){
			s*=a;
		}
		a=a*a;
		n>>=1;
	} 
	n=s;
}
void gets(){
	for (int i=1;i<=n;i++){
		s[i]+=s[i-1];
	}
}
long long dfs(int l,int r){
	if(l==r){
		if(s[r]-s[l-1]!=0){
			return b;
		}
		else{
			return a;
		}
	}
	int a1,b1;
	if(s[r]-s[l-1]==0){
		a1=a;
	}
	else{
		a1=b*(s[r]-s[l-1])*(r-l+1);
	}
	b1=dfs(l,l+(r-l+1)/2-1)+dfs(l+(r-l+1)/2,r);
	return min(a1,b1);	
}
int main(){
	cin>>n>>k>>a>>b;
	for (int i=1;i<=k;i++){
		cin>>y;
		s[y]++;
	}
	mi(); 
	gets();
	cout<<dfs(1,n);
	return 0;
}
