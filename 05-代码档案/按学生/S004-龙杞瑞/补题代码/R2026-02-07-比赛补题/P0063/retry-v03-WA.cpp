#include<bits/stdc++.h>
using namespace std;
const int N=305;
int t,n,a[N],b[N];
bool check(int x){
	if(x<2) return 0;
	for(int i=2;i*i<=x;i++) if(x%i==0) return 0;
	return 1;
}
int main(){
	cin>>t;
	while(t--){
		int f=0,cnt=0;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		int x=a[1]*a[n];
		if(!check(a[1])){
			cout<<"-1\n";
			continue;
		}
		for(int i=2;i*i<=x;i++){
			if(x%i==0){
				b[++cnt]=i;
				if(i!=x/i) b[++cnt]=x/i;
			}
		}
		if(cnt!=n){
			cout<<"-1\n";
			continue;
		}
		sort(b+1,b+cnt+1);
		for(int i=1;i<=n;i++) if(a[i]!=b[i]) f=1;
		if(!f) cout<<x<<'\n';
		else cout<<"-1\n"; 
	}
    return 0;
}