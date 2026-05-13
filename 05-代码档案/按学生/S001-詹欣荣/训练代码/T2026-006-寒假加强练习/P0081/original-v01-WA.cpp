#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n,sum=0;
		cin>>n;
		int cnt[n+1]={},a[n+1]={};
		for(int j=1;j<=n;j++){
			cin>>a[j];
			cnt[a[j]]++;
			if(cnt[a[j]]==1){
				sum+=a[j];
			}
		}
		if(sum!=n){
			cout<<-1<<endl;
			continue;
		}
		for(int j=1;j<=n;j++){
			cout<<a[j]<<" ";	
		}
		cout<<endl;
	}
	return 0;
}