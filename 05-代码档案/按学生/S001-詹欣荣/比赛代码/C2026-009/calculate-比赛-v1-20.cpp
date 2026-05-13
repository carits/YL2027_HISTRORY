#include<bits/stdc++.h>
using namespace std;
long long a[100005];
long long b1[100005];
long long c1[100005];
long long d[100005];
int main(){
	
	freopen("calculatee.in","r",stdin);
	freopen("calculateee.out","w",stdout);
//	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	d[1]=1;
	long long n;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		d[i+1]=d[i]*a[i];
		//cout<<d[i+1]<<"/";
	}
	string b,c;
	cin>>b>>c;
	long long x=0,y=0;
	long long xx=0;
	for(long long i=b.size();i>=1;i--){
		b1[i]=b[xx]-'0';
		xx++;
		//cout<<b1[i]<<"/";
	}
	xx=0;
	for(long long i=c.size();i>=1;i--){
		c1[i]=c[xx]-'0';
		xx++;
		//cout<<c1[i]<<"/";
	}
	
	
	//
	for(long long i=1;i<=b.size();i++){
		x+=d[i]*b1[i];
		//cout<<d[i]*b1[i]<<"/";
	}
	for(long long i=1;i<=c.size();i++){
		y+=d[i]*c1[i];
		//cout<<y<<" ";
	}
	long long z=x*y;
	bool bb=true;
	///
	for(long long i=n;i>=0;i--){
		if(z/d[i]!=0||bb!=true){
//			bb=false;
//			cout<<z/d[i];
//			z-=(z/d[i])*d[i];
		}
	}
	
	return 0;
}
