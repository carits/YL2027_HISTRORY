#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>a>>b;
	if(a%2==1||b%2==1){
		cout<<"Impossible!";
		return 0;
	}
	int ans=a/2*4;
	int ans2=ans-b;
	ans=a/2;
	int y=ans2/2;
	if((b-y*6)/4<0||y<0){
		cout<<"Impossible!";
		return 0;
	}
	cout<<(b-y*6)/4<<" "<<y;
	return 0;
}