#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		int a[n+1]={};
		int b[n+1]={};
		for(int j=1;j<=n;j++){
			cin>>a[j];
			if(j!=1){
				b[j]+=abs(a[j]-a[j-1]);
			}
			if(j!=1){
				b[j-1]+=abs(a[j]-a[j-1]);
			}
		} 
		int pos=0,maxn=0;
		for(int j=1;j<=n;j++){
			int ah=0,bh=0;
			if(j!=n&&j!=1){
				bh=abs(a[j+1]-a[j-1]);
			}
			if(j==1||j==n){
				bh=0;
			}
			ah=b[j];
			if(ah-bh>=maxn){
				maxn=ah-bh;
				pos=j;
			}
		}
		int ans=0;
		for(int j=1;j<=n;j++){
			if(j-1==pos){
				if(j>=3){
					ans+=abs(a[j]-a[j-2]);
				}
			}else{
				if(j!=1&&j!=pos){
					ans+=abs(a[j]-a[j-1]);
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}