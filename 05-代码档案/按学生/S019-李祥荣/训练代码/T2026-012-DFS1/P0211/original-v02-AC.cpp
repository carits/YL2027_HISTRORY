#include<bits/stdc++.h>
using namespace std;
int n,ans=0;
bool check(int x){
	if(x==1) return false;
	for(int i=2;i*i<=x;i++){
		if(x%i==0) return false;
	}
	return true;
}
void dfs(int x,int s){
	if(x==n+1){
		cout<<s<<endl;
		return;
	}
	if(x==1){
		for(int i=1;i<=9;i++){
			if(check(s*10+i)){
				dfs(x+1,s*10+i);
			}
		}
	}else{
		for(int i=0;i<=9;i++){
			if(check(s*10+i)){
				dfs(x+1,s*10+i);
			}
		} 
	}
}
int main(){
	cin>>n;
	dfs(1,0);
	
	return 0;
}