#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n,m,ans;
string x,y;
char c;
bool cmp(int st){
	for(int j=st;j<st+m;j++){
		if(x[j]!=y[j-st]){
			return 0;
		}
	}
	return 1;
}
bool pd(){
	for(int st=0;st<=n-m;st++){
		if(cmp(st))return 1;
	}
	return 0;
}
void slove(){
	cin>> n >> m;
	cin>> x >> y;
	for(int i=0;i<=10;i++){
		n=x.size();
		if(pd()){
			cout<< i << "\n";
			return;
		}
		x+=x;
	}
	cout<< -1 << "\n";
}
signed main(){
	cin>> t;
	while(t--)slove();
	return 0;
}