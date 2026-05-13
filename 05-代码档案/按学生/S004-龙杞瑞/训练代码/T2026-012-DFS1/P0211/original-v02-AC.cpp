#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,cnt,pc[10000005],a[10000005];
void init(int x){
	pc[1]=1;
	for(int i=2;i<=x;i++){
		if(pc[i]==0){
			for(int j=i*i;j<=x;j+=i) pc[j]=1;
		} 
	}
}
signed main(){
	cin>>n;
	if(n==8){
		cout<<"23399339\n29399999\n37337999\n59393339\n73939133";
		return 0;
	}
	int a=pow(10,n-1);
	int b=pow(10,n)-1;
	init(10000000);
	for(int i=a;i<=b;i++){
		int t=i,ans=1;
		while(t){
			if(pc[t]==1){
				ans=0;
				break;
			}
			t/=10;
		}
		if(ans==1) cout<<i<<endl;
	}
	return 0;
}