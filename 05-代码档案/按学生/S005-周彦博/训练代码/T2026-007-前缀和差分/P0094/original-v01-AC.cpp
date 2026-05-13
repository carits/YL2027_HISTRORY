#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, s[N], t;
string st;
map <int, int>mp;
//inline int read()
//{
//	int x = 0, f = 1; char ch = getchar();
//	while(ch < '0' || ch > '9') {if(ch == '-') f = -1; ch = getchar();}
//	while(ch >= '0' && ch <= '9') { x = x * 10 + ch - 48; ch = getchar();}
//	return x * f;
//}
int main(){
	cin >> t;
	while(t--){    
		cin >> n >> st;
	    st = " " + st;
	    s[0] = 0;
	    mp.clear(); 
	    for (int i = 1; i <= n; i++){
	    	s[i] = s[i - 1] + (st[i] - '0') - 1;
	    	mp[s[i]]++;
	    }
	    mp[0]++;
	    long long sum = 0;
	    for (int i = 0; i <= n; i++){
			sum += mp[s[i]] - 1;
	    }
	    cout << sum / 2 << '\n'; 
	}
	    return 0;
}