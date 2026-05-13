#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define inf 2e9
#define INF 1e18

ll t,n,ans;
int const N=2e5+5;
ll a[N];
int main(){
	cin>> t;
	while(t--){
		ans=-INF;
		cin>> n;
		for(int i=1;i<=n;i++)cin>> a[i];
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				ll sum=0;
				for(int k=i;k<=j;k++){
					sum+=a[k];
				}
				ans=max(ans,sum/(ll)(j-i+1));
			}
		}
        cout<< ans << "\n";
	}
	return 0;
}