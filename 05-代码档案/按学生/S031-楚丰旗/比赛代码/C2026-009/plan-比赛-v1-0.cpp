#include <bits/stdc++.h>
#define long long
using namespace std;
int main() {
  freopen("plan.in", "r", stdin);
  freopen("plan.out", "w", stdout);
  int n,m,k,ans=0;
  cin>>n>>m>>k;
  for(int i=1;i<=n;i++){
  	int q,w;
  	cin>>q;
  	if(q!=0){
  		cin>>w;
  		if(w!=0){
  			ans++;
		  }
	}
  }
  cout<<ans;
  return 0;
}
