#include<bits/stdc++.h>
using namespace std;

int t,n;
int const N=1e5+5;
int a[N];
void slove(){
	cin>> n;
	for(int i=1;i<=n;i++)cin>> a[i];
	int gd=abs(a[n]-a[1]);
	for(int i=2;i<=n/2;i++){
		gd=__gcd(abs(a[n-i+1]-a[i]),gd);
	}
	cout<< gd << "\n";
}
int main(){
  cin>> t;
  while(t--)slove();
  return 0;
}