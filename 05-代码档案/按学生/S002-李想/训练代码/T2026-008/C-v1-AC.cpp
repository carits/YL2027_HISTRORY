#include<bits/stdc++.h>
using namespace std;

int n,k,ans;
vector<int>v;
bool vis[1005];
void sai(){
	vis[1]=1;
	for(int i=2;i<=n;i++){
		if(vis[i])continue;
		v.push_back(i);
		for(int j=i+i;j<=n;j+=i){
			vis[j]=1;
//			cout<< j <<" ";
		}
//		cout<<"\n";
	}
}
bool check(int x){
	for(int i=0;i<v.size();i++){
		if(v[i]+v[i+1]+1==x)return 1;
	}	
	return 0;
}
int main(){
  cin>> n >> k;
  sai();
  for(int x:v){
  	if(check(x))ans++;
  }
  if(ans>=k)cout<< "Yes";
  else cout<< "No";
  return 0;
}