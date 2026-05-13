#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int a[N],n,d,h;
signed main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>d>>h;
        for(int i=1;i<=n;i++)cin>>a[i];
        sort(a+1,a+n+1);
        double s=1.0*d*h/2,ans=s*n;
        for(int i=1;i<n;i++){
        	if(a[i+1]-a[i]<h) ans-=s*pow(1.0*(h-a[i+1]+a[i])/h,2);
		}
        cout<<fixed<<setprecision(6)<<ans<<'\n';
    }
    return 0;
}