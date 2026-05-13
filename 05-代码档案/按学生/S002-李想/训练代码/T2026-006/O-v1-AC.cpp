#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define inf 2e9
#define INF 1e18

ll t,n,x;
int main(){
	cin>> t;
	while(t--){
		cin>> n >> x;
		for(int i=1;i<=n;i++)x*=2;
		cout<< x << "\n";
	}
	return 0;
}