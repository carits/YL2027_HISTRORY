#include<bits/stdc++.h>
using namespace std;
struct node{
	int w;
	int y;
}s[100005];
bool cmp(node a,node b){
	return a.w+a.y<b.w+b.y;
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].w>>s[i].y;
	}
	sort(s+1,s+n+1,cmp);
	long long ans=0;
	for(int i=n;i>=1;i--){
		long long cnt=0;
		for(int j=i-1;j>=1;j--){
			cnt+=s[j].w;
			
		}
		ans=max(ans,cnt-s[i].y);
	}
	cout<<ans;
} 