#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int t,n,a[N];
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--){
    	int f=0,z=0,fi=0,o=0;
        cin>>n;
        for(int i=1;i<=n;i++){
        	cin>>a[i];
        	int d=a[i]%10;
        	if(d==0) z=1;
        	else if(d==5) fi=1;
        	else o=1;
        	if(a[i]%2==1) a[i]+=d;
		}
		if((z&&o)||(fi&&o)){
			cout<<"NO";
			f=1;
		}else if(z||fi){
			for(int i=1;i<=n;i++) if(a[i]%10==5) a[i]+=5;
			for(int i=2;i<=n;i++) if(a[i]!=a[1]) f=1;
			if(f) cout<<"NO";
			else cout<<"YES";
		}else{
			int mn=1e18;
			for(int i=1;i<=n;i++){
				while(a[i]%10!=2) a[i]+=a[i]%10;
				mn=min(mn,a[i]);
			}
			for(int i=1;i<=n;i++){
				if((a[i]-mn)%20!=0){
					f=1;
					break;
				}
			}
			if(f) cout<<"NO";
			else cout<<"YES";
		}
		cout<<'\n';
    }
    return 0;
}