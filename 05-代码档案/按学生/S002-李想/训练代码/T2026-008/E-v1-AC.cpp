#include<bits/stdc++.h>
using namespace std;

int t,n;
int const N=1e5+5;
int a[N];
void slove(){
	cin>> n;
	int x=1,p=2;
	for(int i=0;i<=30;i++){
		x+=p;
		p*=2;
		if(n%x==0){
			cout<< n/x << "\n";
			return;
		}
	}
}
int main(){
  cin>> t;
  while(t--)slove();
  return 0;
}