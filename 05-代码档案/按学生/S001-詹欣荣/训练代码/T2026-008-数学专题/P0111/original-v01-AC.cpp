#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=2;
	while(i<=1000000000&&n>0){
		bool b=true;
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				b=false;
				break;
			}
		}
		if(b){
			cout<<i<<" ";
			n--;
		}
		i++;
	}
}