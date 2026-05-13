#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=n+1;i<=9000;i++){
		int m=i;
		int ge=m%10;
		m/=10;
		int shi=m%10;
		m/=10;
		int bai=m%10;
		m/=10;
		int qian=m;
		if(ge!=shi&&ge!=bai&&ge!=qian&&shi!=qian&&shi!=bai&&bai!=qian){
			cout<<i;
			break;
		}
	}
	return 0;
}