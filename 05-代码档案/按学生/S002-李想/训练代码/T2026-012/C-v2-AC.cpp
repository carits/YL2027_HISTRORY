#include<bits/stdc++.h>
using namespace std;

int n,ct,ans;
int a[15];
int s(vector<int>v){
	int sm=0;
	sort(v.begin(),v.end(),greater<int>());
	for(int c:v){
		sm=sm*10+c;
	}
	return sm;
}
void dfs(int i,vector<int>x,vector<int>y){
	if(i==ct+1){
		ans=max(ans,s(x)*s(y));
		return;
	}
	x.push_back(a[i]);
	dfs(i+1,x,y);
	x.pop_back();
	y.push_back(a[i]);
	dfs(i+1,x,y);
	y.pop_back();
}
int main(){
	cin>> n;
	while(n){
		a[++ct]=n%10;
		n/=10;
	}
	vector<int>x,y;
	dfs(1,x,y);
	cout<< ans;
	return 0;
}