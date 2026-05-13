#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		long long a,b,maxn=-1;
		cin>>b>>a;
		if((a+b)%2==0){
			maxn=max(maxn,a+b);
		}
		if(a%2==1&&b%2==1){
			maxn=max(maxn,a*b+1);
		}else if(a%2==0&&(a%4==0||b%2==0)){
			maxn=max(maxn,2+(a*b)/2);
		}
		cout<<maxn<<endl;
	}
	return 0;
}