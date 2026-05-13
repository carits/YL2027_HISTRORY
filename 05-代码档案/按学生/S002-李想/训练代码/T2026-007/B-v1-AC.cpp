#include<bits/stdc++.h>
using namespace std;

int q,n,l,r;
string s;
int const N=1e5+5;
int a[N],sum[N][30];
void slove(){
	int ans=0;
	cin>> l >> r;
	for(int i=1;i<=26;i++)ans+=(i*(sum[r][i]-sum[l-1][i]));
	cout<< ans << "\n";
}
int main(){
  cin>> n >> q >> s;
  s='@'+s;
  for(int i=1;i<=n;i++){
  	for(int j=1;j<=26;j++){
  		sum[i][j]=sum[i-1][j];
  		if(s[i]-'a'+1==j)sum[i][j]++;
  	}
  }
  while(q--)slove();
  return 0;
}