#include <bits/stdc++.h>
using namespace std;
//int d[5][10]={20,20,20,20,20,0,0,0,0,0,20,20,20,20,20,0,0,0,0,0,20,20,10,30,20,0,0,0,0,0,25,25,30,20,0,0,0,0,0,0,15,15,15,10,10,15,20,0,0,0};
//暴力出奇迹，骗分过样例 
//进制转换
#define int long long
int n,a[100010],need,have;
int itoten(int i,int num){
	int now=1;//i's 0 times
	int sum=0;//bnum
	while(num!=0){
		sum+=(num%10)*now;
		now*=i;
		num/=10;
	}
	return sum;
}
signed main() {	
	freopen("calculate.in", "r", stdin);
	freopen("calculate.out", "w", stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>need>>have;
	cout<<need*have;
	return 0;
}
