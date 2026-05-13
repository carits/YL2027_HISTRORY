#include<bits/stdc++.h>
using namespace std;
int n, f[3005], s;
int main(){
	f[1]=1;
	cin>>n;
	for(int i = 2; i <= n; i++)
    	if(!f[i]){
    		for(int j = 2; j * i <= n; j++) f[i * j]++;
    	}
	for(int i = 1; i <= n; i++)
	if(f[i] == 2) s++;
	cout << s;
	return 0;
}