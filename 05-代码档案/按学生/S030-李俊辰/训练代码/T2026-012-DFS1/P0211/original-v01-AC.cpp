#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define qwq ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
using namespace std;
int n;
int f(int x){
	if(x==1){
		return 0;
	}
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
void zs(int x,int y){
	for(int i=1;i<=9;i++){
		if(f(10*y+i)==1){
			if(x==n){
				cout<<10*y+i<<endl;
			}
			else{
				zs(x+1,10*y+i);
			}
		}
	}
}
signed main(){
	qwq;
	cin>>n;
	zs(1,0);
	return 0;
}