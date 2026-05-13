#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005]={};
int l=1;
int r=10000000;
int h;
int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(l<=r){
		bool flag=0;
		int mid=(l+r)/2;
		int y=mid;
		for (int i=1;i<=n;i++){
			y+=a[i];
			if(y<=0){
				flag=1;
				break;
			}
		}
		if(flag){
			l=mid+1;
		}
		else{
			h=mid;
			r=mid-1;
		}
	}
	cout<<h;
	return 0;
}
