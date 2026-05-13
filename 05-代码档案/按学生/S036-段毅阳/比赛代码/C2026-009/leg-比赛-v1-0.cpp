#include<bits/stdc++.h>
using namespace std;
int n,m,a,b,c,d;
long long minn=1e18;
void dfs(int x,int y,long long step){
    if(x==n&&y==m){
        if(step<=minn) minn=step;
        return;
    }
    if((x+y)%2==0){
        int ax=x+1,ay=y+1;
        if(ax<=n) dfs(ax,y,step+a);
        if(ay<=m) dfs(x,ay,step+b);
    }else{
        int ax=x+1,ay=y+1;
        if(ax<=n) dfs(ax,y,step+c);
        if(ay<=m) dfs(x,ay,step+d);
    }
}
int main(){
	freopen("leg.in","r",stdin);
	freopen("leg.out","w",stdout);
	cin >> n >> m >> a >> b >> c >> d;
	dfs(0,0,0);
	cout << minn;
	return 0;
}

