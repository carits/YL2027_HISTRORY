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
        ans=INF,sum=0;
		cin>> n;
		for(int i=1;i<=n;i++)cin>> a[i];
        for(int i=1;i<n;i++)sum+=abs(a[i+1]-a[i]);
		ans=min(ans,sum-abs(a[2]-a[1]));
        for(int i=2;i<n;i++){
            ans=min(ans,sum-abs(a[i]-a[i-1])-abs(a[i+1]-a[i])+abs(a[i+1]-a[i-1]));
        }
        ans=min(ans,sum-abs(a[n]-a[n-1]));
        cout<< ans << "\n";
	}
	return 0;
}