#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int t;
		cin>>t;
		for(int j=1;j<=t;j++){
			a[j]=0;
		}
		int maxn=0;
		for(int j=1;j<=t;j++){
			int x;
			cin>>x;
			if(a[x]==0){
				a[x]=j;
			}else{
				maxn=max(maxn,a[x]);
				a[x]=j;
			}
		}
		cout<<maxn<<endl;
	}
	return 0;
	
}