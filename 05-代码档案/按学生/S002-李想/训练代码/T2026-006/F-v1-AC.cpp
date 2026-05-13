#include<bits/stdc++.h>
using namespace std;

int t,n,x;
int const N=30;
int s[N],e[N];
int main(){
	cin>> t;
	while(t--){
		bool p=0;
		cin>> n >> x;
		if(n==x){
			cout<< 0 << "\n";
			continue;
		}
		int nx=n,ny=n;
		for(int i=1;i<=29;i++){
			nx/=2,ny=ceil(1.0*ny/2);
			if(nx<=x&&x<=ny){
				cout<< i;
				break;
			}
			if(i==29)cout<< -1;
		}
		cout<< "\n";
	}
	return 0;
}