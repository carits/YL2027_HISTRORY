#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f,g;
int main() {
	freopen("leg.in","r",stdin);
	freopen("leg.out","w",stdout);
	cin>>a>>b>>c>>d>>e>>f;
	if(c>e){
		if(d>f){
			if(c-e>=d-f){
				if(a==b)g=e*a+d*b;
				else{
				g=min((min(a,b)+1),a)*e+min(a,b)*d;
				if(a>b){
				for(int i=min(a,b);i<a;i++){
					if((i+a)%2==0){
						g+=c;
					}else{
						g+=e;
					}
				}
				}if(a<b){
				for(int i=min(a,b)+1;i<b;i++){
					if((i+a)%2==0){
						g+=d;
					}else{
						g+=f;
					}
				}
				}
				
				}cout<<1;
			}else{
				if(a==b)g=c*a+f*b;
				else{
				g=min(a,b)*f+min(min(a,b)+1,a)*c;
				if(a>b){
				for(int i=min(a,b)+1;i<a;i++){
					if((i+a)%2==0){
						g+=c;
					}else{
						g+=e;
					}
				}
				}if(a<b){
				for(int i=min(a,b);i<b;i++){
					if((i+a)%2==0){
						g+=d;
					}else{
						g+=f;
					}
				}
				}
				
				}cout<<2; 
			}
		}else{
			if(a==b){
				g=a*d+b*e;
			}else{
				g=min(a,b)*e+min(min(a,b)+1,b)*d;
				if(a>b){
				for(int i=min(a,b);i<a;i++){
					if((i+a)%2==0){
						g+=c;
					}else{
						g+=e;
					}
				}
				}if(b>a){
				for(int i=min(a,b)+1;i<b;i++){
					if((i+a)%2==0){
						g+=d;
					}else{
						g+=f;
					}
				}
				}
			}cout<<3;
		}
	}else{
	if(d>f){
		if(a==b){
			g=a*c+b*f;	
		}else{
			g=min(a,b)*f+min(min(a,b)+1,a)*c;
			if(a>b){
				for(int i=min(a,b)+1;i<a;i++){
					if((i+a)%2==0){
					g+=c;
					}else{
					g+=e;
				}
			}
		}}if(b>a){
			for(int i=min(a,b);i<b;i++){
				if((i+a)%2==0){
					g+=d;
				}else{
					g+=f;
				}
			}
		}
	}else{
		if(e-c>=f-d){
			if(a==b)g=c*a+f*b;
			else{
				g=min(min(a,b)+1,a)*c+min(a,b)*f;
				if(a>b){
					for(int i=min(a,b)+1;i<a;i++){
						if((i+b)%2==0){
							g+=c;
						}else{
							g+=e;
						}
					}
				}else{
					for(int i=min(a,b);i<b;i++){
						if((i+a)%2==0){
							g+=d;
						}else{
							g+=f;
						}
					}
				}
			}
		}else{
			if(a==b){
				g=d*a+b*e;
			}else{
				g=min(min(a,b)+1,b)*d+min(a,b)*e;
				if(a>b){
					for(int i=min(a,b);i<a;i++){
						if((b+i)%2==0){
							g+=c;
						}else{
							g+=e;
						}
					}
				}if(a<b){
					for(int i=min(a,b)+1;i<=b;i++){
						if((a+i)%2==0){
							g+=d;
						}else{
							g+=f;
						}
					}
				}
			}
		}
		}
	}
	
cout<<g;
  return 0;
}
