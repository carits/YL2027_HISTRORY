#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x){
	if(x < 2) return false;
	for(int i = 2; i * i <= x; i++)
		if(x % i == 0) return false;
	return true;
}
int n;
void dfs(int step, int x){
	if(step > n){
		if(isPrime(x)) cout << x << '\n';
		return;
	}
	for(int i = 0; i <= 9; i++){
		int nx = x * 10 + i;
		if(isPrime(nx))
			dfs(step + 1, nx);
	}
}
int main(){
	cin >> n;
	dfs(1, 0);
	return 0;
}