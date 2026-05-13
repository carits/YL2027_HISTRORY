#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	  cin>>a[i];
  }
  int cnt=0;
  int maxn=0;
  for(int i=1;i<=n;i++){
    cnt+=a[i];
    maxn=min(maxn,cnt);
  }
  cout<<(0-maxn)+1;
	return 0;
}