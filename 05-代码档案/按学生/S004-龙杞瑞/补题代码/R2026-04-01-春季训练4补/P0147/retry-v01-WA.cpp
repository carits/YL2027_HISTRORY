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
    	int f=0,maxn=0;
        cin>>n;
        for(int i=1;i<=n;i++){
        	cin>>a[i];
        	if(a[i]%2==1) a[i]+=a[i]%10;
        	maxn=max(maxn,a[i]);
		}
		for(int i=1;i<=n;i++){
			if(a[i]==maxn) continue;
			int x=maxn-a[i];
			if(a[i]%10==0){
				cout<<"NO";
				f=1;
				break;
			}
			if(a[i]%10==2){
				if(x%20!=2&&x%20!=6&&x%20!=14){
					cout<<"NO";
					f=1;
					break;
				} 
			}else if(a[i]%10==4){
				if(x%20!=4&&x%20!=12&&x%20!=18){
					cout<<"NO";
					f=1;
					break;
				} 
			}else if(a[i]%10==6){
				if(x%20!=6&&x%20!=8&&x%20!=12){
					cout<<"NO";
					f=1;
					break;
				} 
			}else if(a[i]%10==8){
				if(x%20!=8&&x%20!=14&&x%20!=16){
					cout<<"NO";
					f=1;
					break;
				} 
			}
		}
		if(f==0) cout<<"YES";
		cout<<'\n';
    }
    return 0;
}