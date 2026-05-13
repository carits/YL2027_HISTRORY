#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int ans[1005][1005];
void t(int x,int y){
	ans[x][y]=43;ans[x][y+1]=45;ans[x][y+2]=45;ans[x][y+3]=45;ans[x][y+4]=43;
	x++;
	ans[x][y]=124;ans[x][y+1]=1;ans[x][y+2]=1;ans[x][y+3]=1;ans[x][y+4]=124;ans[x][y+5]=47;
	x++;
	ans[x][y]=124;ans[x][y+1]=1;ans[x][y+2]=1;ans[x][y+3]=1;ans[x][y+4]=124;ans[x][y+5]=1;ans[x][y+6]=43;
	x++;
	ans[x][y]=43;ans[x][y+1]=45;ans[x][y+2]=45;ans[x][y+3]=45;ans[x][y+4]=43;ans[x][y+5]=1;ans[x][y+6]=124;
	x++;
	ans[x][y+1]=47;ans[x][y+2]=1;ans[x][y+3]=1;ans[x][y+4]=1;ans[x][y+5]=47;ans[x][y+6]=124;
	x++;
	ans[x][y+2]=43;ans[x][y+1+2]=45;ans[x][y+2+2]=45;ans[x][y+3+2]=45;ans[x][y+4+2]=43;
	
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	int b=0,c=0;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=m;j++){
			for(int k=1;k<=a[i][j];k++){
				//cout<<1+(i-1)*3+(k-1)*3<<1+(j-1)*4<<"o";
				t(1+(i-1)*2+(k-1)*3,1+(j-1)*4+(i-1)*2);
				b=max(b,1+(i-1)*2+(k-1)*3+5);
				c=max(c,1+(j-1)*4+(i-1)*2+6);
			}
		}
	}

	for(int i=b;i>=1;i--){
		for(int j=1;j<=c;j++){
			if(ans[i][j]==0){
				cout<<".";
			}
			else if(ans[i][j]==1){
				cout<<" ";
			}
			else if(ans[i][j]==43){
				cout<<"+";
			}
			else if(ans[i][j]==45){
				cout<<"-";
			}
			else if(ans[i][j]==47){
				cout<<"/";
			}
			else if(ans[i][j]==124){
				cout<<"|";
			}
		}
		cout<<endl;
	}
	return 0;
}