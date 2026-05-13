#include<bits/stdc++.h>
using namespace std;
int a[1000005],maxx=-100,x=1;
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>a[i];
	}
	for(int i=1;i<t;i++){
		if(a[i+1]>a[i]*2){
			maxx=max(maxx,x);
			x=1;
		}else{
			x++;
		}
	}
	cout<<maxx;
	return 0;
}