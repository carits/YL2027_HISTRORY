#include<bits/stdc++.h>
using namespace std;
const int maxn=20;
int a[maxn][2],b[maxn+1],n,ans;
void find(int i){
	if(i>=n){
		ans++;
		return;
	}
	for(int j=0;j<=1;j++){
		if(!b[a[i][j]]){
			b[a[i][j]]=1;
			find(i+1);
			b[a[i][j]]=0;
		}
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i][0]>>a[i][1];
	find(0);
	cout<<ans;
    return 0;
}