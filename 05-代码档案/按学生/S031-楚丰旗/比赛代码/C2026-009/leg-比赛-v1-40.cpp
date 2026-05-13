#include <bits/stdc++.h>
using namespace std;
long long n,m,a,b,c,d;
int main() {
  freopen("leg.in", "r", stdin);
  freopen("leg.out", "w", stdout);
  	cin>>n>>m>>a>>b>>c>>d;
  	long long x=0,y=0,ans=0;
  	for(int i=1;i<=n+m;i++){
  		if(x<n&&y<m){
  			if((x+y)%2==0){
  				if(a<=b){
  					ans+=a;
  					x++;
				  }else{
				  	ans+=b;
				  	y++;
				  }
			}else{
				if(c<=d){
					ans+=c;
					x++;
				}else{
					ans+=d;
					y++;
				}
			}
		}else if(x==n&&y<m){
			if((x+y)%2==0){
				ans+=b;
				y++;
			}else{
				ans+=d;
				y++;
			}
		}else if(x<n&&y==m){
			if((x+y)%2==0){
				ans+=a;
				x++;
			}else{
				ans+=c;
				x++;
			}
		}else{
			break;
		}
	}
	cout<<ans;
  	return 0;
}
