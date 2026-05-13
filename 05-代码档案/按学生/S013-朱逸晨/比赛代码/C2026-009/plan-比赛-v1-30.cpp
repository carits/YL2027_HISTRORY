#include<bits/stdc++.h>
using namespace std;
int n,m,c[100005],d[100005][15],maxn;
long long k;
int main(){
	freopen("plan.in","r",stdin);
	freopen("plan.out","w",stdout);
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		cin>>c[i];
		for(int j=1;j<=c[i];j++){
			cin>>d[i][j];
		}
	}
	if(m==1){
		int l=1,r=1,no=0,sum_no=0;
		for(;r<=n;r++){
			if(c[r]){
				sum_no+=no;
			}else{
				no++;
				sum_no+=r-l;
			}
			while(sum_no>=k){
				if(c[l]){
					sum_no-=no;
				}else{
					no--;
					sum_no-=r-l;
				}
				l++;
			}
			maxn=max(maxn,r-l+1);
		}
		cout<<maxn;
	}
	return 0;
}
