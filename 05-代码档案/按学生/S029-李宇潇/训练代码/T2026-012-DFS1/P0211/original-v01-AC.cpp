#include <iostream>
#include <cmath>
#include <vector> 
using namespace std;

int prime[] = {2,3,5,7};
vector<int> ans;

bool is_prime(int n){
	for(int i = 2;i <= int(sqrt(n));i++){
		if(n % i == 0) return false; 
	} 
	return true;
}

void dfs(int dep,int num,int n){
	if(dep >= n){
		ans.push_back(num);
		return;
	}
	
	for(int i = 0;i < 10;i++){
		int tmp = num * 10 + i;
		if(is_prime(tmp)){
			dfs(dep + 1,tmp,n);
		}
	}
}

int main(){
	int n;
	cin >> n;
	
	for(int i = 0;i < 4;i++){
		dfs(1,prime[i],n);
	}
	
	for(int i = 0;i < ans.size();i++){
		cout << ans[i] << "\n";
	}

	return 0;
}
