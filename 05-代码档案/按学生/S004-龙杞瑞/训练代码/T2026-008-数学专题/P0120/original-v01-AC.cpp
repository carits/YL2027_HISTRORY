#include<bits/stdc++.h>
using namespace std;
int n,mx;
int check(int x){
	if(x<2) return 0;
	for(int i=2;i*i<=x;i++){
		if(x%i==0) return 0;
	}
	return 1;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0); 
	cin>>n;
	for (int i=n;i>=1;i--)
		if (check(i)){
			mx=i,n-=i;
			break;
		}
	if(!n) cout<<"1\n"<<mx;
	else if(n<3) cout<<"2\n2 "<<mx;
	else{
		for(int i=2;i<n;i++){
			if(check(i)&&check(n-i)){
				cout<<"3\n"<<mx<<' '<<i<<' '<<n-i;
				return 0;
			}
		}
	}
		
	return 0;
}