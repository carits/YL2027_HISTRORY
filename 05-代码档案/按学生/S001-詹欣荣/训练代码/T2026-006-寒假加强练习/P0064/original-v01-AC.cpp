#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int sum=0;
		int n,s,x;
		cin>>n>>s>>x;
		for(int j=1;j<=n;j++){
			int b;
			cin>>b;
			sum+=b;
		}
		if(sum<=s&&(s-sum)%x==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
	
}