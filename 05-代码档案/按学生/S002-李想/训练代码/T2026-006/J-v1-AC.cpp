#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define inf 2e9
#define INF 1e18

ll t,n,ans,sum;
int const N=2e5+5;
ll a[N],cha[N];
int main(){
	cin>> t;
	while(t--){
		ans=0;
		cin>> n;
		for(int i=0;i<=n/2;i++){
			int j=(n-(i*2))/4;
			if((i*2)+(j*4)==n)ans++;
		}
		cout<< ans << "\n";
	}
	return 0;
}