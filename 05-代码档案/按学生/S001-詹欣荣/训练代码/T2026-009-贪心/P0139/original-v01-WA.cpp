#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		long long a,b,c;
		cin>>a>>b>>c;
		if(a==b){
			cout<<0<<'\n';
			break;
		}
		long long cnt=1;
		while(abs(a-b)>c*2){
			if(a>b){
				a-=c;
				b+=c;
			}
			else{
				b-=c;
				a+=c;
			}
			cnt++;
		}
		cout<<cnt<<'\n';
	}
	return 0;
}