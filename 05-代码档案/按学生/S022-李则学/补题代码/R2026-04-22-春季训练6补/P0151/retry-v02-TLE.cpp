#include<bits/stdc++.h>
using namespace std;
int a[1000005],maxx=-100;
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>a[i];
	}
	for(int i=1;i<t;i++){
		int l=i,r;
		for(int j=i;j<=t;j++){
			if(a[i]*2>=a[j]){
				r=j;
			}else{
				break;
			}
		}
		maxx=max(r-l+1,maxx);
	}
	cout<<maxx;
	return 0;
}