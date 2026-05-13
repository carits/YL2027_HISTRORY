#include<bits/stdc++.h>
using namespace std;

int t,a,b,c;
void slove(){
	cin>> a >> b >> c;
	cout<< ceil(1.0*abs(b-a)/(c*2)) << "\n";
}
int main(){
	cin>> t;
	while(t--)slove();
	return 0;
} 