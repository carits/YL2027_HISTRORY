#include<bits/stdc++.h>
using namespace std;
struct node{
	int x,y;
};
bool cmp(node a,node b){
		return a.y<b.y;
}
int a,b,n,s,ans,cnt;
node v[1000000];
int main(){
	cin>>n>>s>>a>>b;
	ans=a+b;
	for(int i=1;i<=n;i++){
		cin>>v[i].x>>v[i].y;
	}
	sort(v+1,v+n+1,cmp);
	int liqi = 0;
	for(int i=1;i<=n;i++){
		if(v[i].x>ans) continue;
		if(liqi+v[i].y>s) break;
		cnt++;
		liqi+=v[i].y;
	}
	cout<<cnt;
	return 0;
}