#include<bits/stdc++.h>
using namespace std;
int a[10005][5];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i][1]>>a[i][2]>>a[i][3]>>a[i][4];
	}
	int x,y;
	cin>>x>>y;
	for(int i=n;i>=1;i--){
		if(x<=a[i][1]+a[i][3]-1&&y<=a[i][2]+a[i][4]-1){
			cout<<i;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}



