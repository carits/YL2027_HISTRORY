#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int t,n,a[N],cnt[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) cnt[i]=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			cnt[a[i]]++;
		}
		int p=1;
		while(p<=n){
			if(cnt[a[p]]>1){
				cnt[a[p]]--;
				p++;
			}
			else break;
		}
		cout<<p-1<<endl;
	}
	return 0;
}