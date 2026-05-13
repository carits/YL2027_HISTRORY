#include<bits/stdc++.h>
using namespace std;
int n, k, cnt, ans, p[1005];
bool f[1005];
void sf(){
	for(int i = 2; i <= n; i++)
		if(!f[i]){
			p[++cnt] = i;
			for(int j = i * 2;j <= n; j += i)f[j] = 1;
		}
}
int main(){
	cin >> n >> k;
	sf();
	for(int i=3;i <= cnt && ans < k; i++){
		for(int j = 1; j < i - 1; j++)
		    if(p[j] + p[j + 1] + 1 == p[i]){
		    	ans++;
		    	break;
		    }
	}
	if (ans == k) cout <<"YES";
    else cout <<"NO";
	return 0;
}