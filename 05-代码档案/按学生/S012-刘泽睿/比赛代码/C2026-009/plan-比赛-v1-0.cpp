#include <bits/stdc++.h>
using namespace std;
int a,b,c,d[100001][2][11],e,l;
int main() {
	preopen("plan.in","r",stdin);
	preopen("plan.out","w",stdout);
	cin>>a>>b>>c;
	for(int i=1;i<=a;i++){
		cin>>e;
		for(int j=1;j<=e;j++){
			cin>>d[i][0][j];
			d[i][1][d[i][0][j]]=1;
		}
	}for(int i=1;i<=a;i++){
		for(int j=i+1;j<=a;j++){
			int s[j+1];
			for(int h=1;d[j][0][h];h++){
				for(int k=i;k<j;k++){
					if(d[k][1][d[j][0][h]]){
						s[k]=-1;
					}
				}
			}for(int h=1;h<j;h++){
				if(s[h]!=(-1))e++;
			}if(e>=c){
				l=max(l,j-i);
				break;
			}if(j==a){
				l=max(l,j-i);
			}
		}
	}cout<<l;
    return 0;
}
