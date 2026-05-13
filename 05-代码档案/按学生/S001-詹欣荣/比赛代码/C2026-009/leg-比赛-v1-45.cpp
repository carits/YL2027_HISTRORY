#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("leg.in","r",stdin);
	freopen("leg.out","w",stdout);
	long long n,m,a,b,c,d;
	cin>>n>>m>>a>>b>>c>>d;
	long long x=0,y=0;
	long long cnt=0;
	for(int i=1;i<=n+m;i++){
		if((x+y)%2==0){
			if(a<b&&x+1<=n){
				x++;
				cnt+=a;
			}else if(y+1<=m){
				y++;
				cnt+=b;
			}else{
				x++;
				cnt+=a;
			}
		}else{
			if(c<d&&x+1<=n){
				x++;
				cnt+=c;	
			}else if(y+1<=m){
				y++;
				cnt+=d;
			}else{
				x++;
				cnt+=c;
			}
		}
	}
//	long long t=min(n,m);
//	long long cnt1=a*t+d*t;
//	long long cnt2=b*t+c*t;
//	if(t==n){
//		for(int i=t*2;i<=m+n;i++){
//			if(i%2==0){
//				
//			}
//		}
//	}else{
//		
//	}
cout<<cnt;
	return 0;
}
