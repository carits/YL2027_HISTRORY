#include<bits/stdc++.h>
using namespace std;
#define int long long

int l,r,ans;
signed main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>> l >> r;
	for(int i=2;i<=62;i++){
		for(int j=i-2;j>=0;j--){
			int x=(pow(2,i)-1)-(pow(2,j));
			if(x>=l&&x<=r)ans++;
		}
	}
	cout<< ans;
	return 0;
}
//1 10 11 100 101 110 111 1000 1001 1010 1011 1100 1101 1110 1111 10000 10001 10010 10011 10100
//10101 10110 10111 11000 11001 11010 11011 11100 11101 11110 11111
//