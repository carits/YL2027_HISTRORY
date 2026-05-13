#include<bits/stdc++.h>
using namespace std;
bool l[25][25];
bool f[25];
int a[25]; 
int cnt=0;
void dfs(int n,int m){
	
	for(int i=1;i<=n;i++){
		if(f[i]==false&&l[i][m]==true){
			if(m==n){
				cnt++;
				return ;
			}
			a[m]=i;
			f[i]=true;
			dfs(n,m+1);
			f[i]=false;
			a[m]=0;
		}
	}
}
int main(){
	int x;
	cin>>x;
	for(int i=1;i<=x;i++){
		int aa,bb;
		cin>>aa>>bb;
		l[i][aa]=true;//第aa个人喜欢第i本书 
		l[i][bb]=true;
	}
	dfs(x,1);
	cout<<cnt;
	return 0;
}