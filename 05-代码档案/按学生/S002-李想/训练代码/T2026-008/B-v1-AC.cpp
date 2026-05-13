#include<bits/stdc++.h>
using namespace std;

int n,ans;
int const N=1e7+5;
bool vis[N];
void sai(){
	vis[1]=1;
	for(int i=2;i<=1e7;i++){
		if(vis[i])continue;
		for(int j=i+i;j<=1e7;j+=i){
			vis[j]=1;
//			cout<< j <<" ";
		}
//		cout<<"\n";
	}
}
int main(){
  cin>> n;
  sai();
  for(int i=2;i<=1e7;i++){
  	if(vis[i])continue;
  	ans++;
//  	cout<< vis[i] << " ";
  	cout<< i << " ";
  	if(ans==n)break;
  }
  return 0;
}