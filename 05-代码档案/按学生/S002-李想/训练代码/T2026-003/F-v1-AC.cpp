#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n,k;
int const N=1e5+5;
int a[N];
signed main(){
	cin>> t;
	while(t--){
		cin>> n >> k;
        k--;
		for(int i=1;i<=n;i++){
			k-=i;
			if(k<0){
				k+=i;
				int t1=n-i,t2=n-k;
				for(int i=1;i<=n;i++){
					if(i==t1||i==t2)cout<< 'b';
					else cout<< 'a';
				}
				cout<< "\n";
				break;
			}
		}
	}
	return 0;
}