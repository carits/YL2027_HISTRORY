#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define inf 2e9
#define INF 1e18

ll t,n;
int main(){
	cin>> t;
//	cout<< (t^6);
	while(t--){
		cin>> n;
		for(int i=1;i<=n;i++){
			ll x;
			cin>> x;
			cout<< n-x+1 << " "; 
		}
        cout<< "\n";	
	}
	return 0;
}