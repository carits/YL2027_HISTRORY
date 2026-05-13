#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a,b,c,d,x,y,sum;
signed main() {
	freopen("leg.in","r",stdin);
	freopen("leg.out","w",stdout);
	cin>>n>>m>>a>>b>>c>>d;
	while((x<=n && y<m) || (x<n && y<=m)){
		if(x==n){
			if((m-y+1)/2-(m-y)/2==1){
				if((x+y)%2==1) cout<<(m-y)/2*(b+d)+d+sum;
				else cout<<(m-y)/2*(b+d)+b+sum;
				return 0;
			}
			else{
				cout<<(m-y)/2*(b+d)+sum;
				return 0;
			}
		}
		if(y==m){
			if((n-x+1)/2-(n-x)/2==1){
				if((x+y)%2==1) cout<<(n-x)/2*(a+c)+c+sum;
				else cout<<(n-x)/2*(a+c)+a+sum;
				return 0;
			}
			else{
				cout<<(n-x)/2*(a+c)+sum;
				return 0;
			}
		}
		if((n-x)==(m-y)){
			cout<<(n-x)/2*min((a+d),(b+c))+sum;
			return 0;
		}
		if((x+y)%2==0){
			if(a<=b) x++,sum+=a;
			else y++,sum+=b;
		}
		else{
			if(c<=d) x++,sum+=c;
			else y++,sum+=d;
		}
	}
	cout<<sum;
  return 0;
}
