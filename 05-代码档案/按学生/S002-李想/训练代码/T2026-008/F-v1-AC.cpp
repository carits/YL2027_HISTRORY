#include<bits/stdc++.h>
using namespace std;

int n,ans;
int const N=3005;
bool vis[N];
int as[N];
void sai(){
	vis[1]=1;
	for(int i=2;i<=3000;i++){
		if(vis[i])continue;
		for(int j=i+i;j<=3000;j+=i){
			vis[j]=1;
			as[j]++;
//			cout<< j <<" ";
		}
//		cout<<"\n";
	}
}
int main(){
  cin>> n;
  sai();
  for(int i=1;i<=n;i++){
  	if(as[i]==2)ans++;
  }
  cout<< ans;
  return 0;
}