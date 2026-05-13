#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[105];
struct node{
	int l;
	int r;
}b[1005];
vector<int>v;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]==a[j]){
				cnt++;
				b[cnt].l=i;
				b[cnt].r=j;
			}
		}
	}
	int maxn=-INT64_MAX;
	int sl=0,sr=0;
	for(int i=1;i<=cnt;i++){
		int sum=a[b[i].l]+a[b[i].r];
		for(int j=b[i].l+1;j<b[i].r;j++){
			if(a[j]>0){
				sum+=a[j];
			}
		}
		if(sum>=maxn){
			sl=b[i].l;
			sr=b[i].r;
			maxn=sum;
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(i<sl||i>sr){
			ans++;
			v.push_back(i);
		}
		else if(a[i]<0&&i!=sl&&i!=sr){
			ans++;
			v.push_back(i);
		}
	}
	cout<<maxn<<" "<<ans<<endl;
	for(int i=0;i<ans;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}