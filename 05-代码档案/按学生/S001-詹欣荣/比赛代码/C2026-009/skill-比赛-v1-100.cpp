#include<bits/stdc++.h>
using namespace std;
int a[10][10];
int main(){
	freopen("skill.in","r",stdin);
	freopen("skill.out","w",stdout);
	a[1][1]=20;
	a[1][2]=20;
	a[1][3]=20;
	a[1][4]=20;
	a[1][5]=20;
	a[2][1]=20;
	a[2][2]=20;
	a[2][3]=10;
	a[2][4]=30;
	a[2][5]=20;
	a[3][1]=25;
	a[3][2]=25;
	a[3][3]=30;
	a[3][4]=20;
	
	a[4][1]=15;
	a[4][2]=15;
	a[4][3]=15;
	a[4][4]=10;
	a[4][5]=10;
	a[4][6]=15;
	a[4][7]=20;
	int c,b;
	cin>>c>>b;
	cout<<a[c][b]; 
	return 0;
}
