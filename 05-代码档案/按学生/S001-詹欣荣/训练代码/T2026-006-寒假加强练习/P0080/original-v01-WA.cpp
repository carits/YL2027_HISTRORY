#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		long long a,b,maxn=-1;
		cin>>a>>b;
		for(int j=2;j<=b;j++){
			if(b%j==0){
				long long aa=a,bb=b;
				aa*=j;
				bb/=j;
				if((aa+bb)%2==0){
					maxn=max(maxn,aa+bb);
				}
			}
		}
		cout<<maxn<<endl;
	}
	return 0;
}