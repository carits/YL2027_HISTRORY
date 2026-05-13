#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n;
int const N=2e5+5;
int sum[N];
void slove(){
	cin>> n;
	cout<< sum[n] << "\n";
}
signed main(){
  cin>> t;
  for(int i=1;i<=2e5;i++){
  	int x=i,sm=0;
  	while(x){
  		sm+=(x%10); 
  		x/=10;
  	}
  	sum[i]=sum[i-1]+sm; 
  }
  while(t--)slove();
  return 0;
}