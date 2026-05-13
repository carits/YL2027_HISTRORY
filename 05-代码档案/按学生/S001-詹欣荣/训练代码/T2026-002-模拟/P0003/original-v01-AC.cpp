#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
	int l,m,u,v,cnt=0;
	cin>>l>>m;
    
	for(int i=0;i<=l;i++){
		a[i]=1;
	}
	for(int i=1;i<=m;i++){
		cin>>u>>v;
		for(int i=u;i<=v;i++){
			if(a[i]==1){
				a[i]=0;	
			}
		}
	}
	for(int i=0;i<=l;i++){
		if(a[i]==1){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}