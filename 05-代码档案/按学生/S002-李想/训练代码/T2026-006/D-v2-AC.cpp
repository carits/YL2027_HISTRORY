#include<bits/stdc++.h>
using namespace std;

int t,n;
int main(){
	cin>> t;
	while(t--){
		cin>> n;
		if(n<=3){
			cout<< n;
		}else{
			cout<< n%2;
		}
		cout<< "\n";
	}
	return 0;
}