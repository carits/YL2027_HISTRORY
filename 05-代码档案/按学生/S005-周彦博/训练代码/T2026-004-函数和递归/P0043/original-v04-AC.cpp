#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string s, w;
int n, m, q , a, b;
int main(){
    IOS
    cin >> n >> m >> q >> s >> w;
    for (int i = 1; i <= q; i++){
    	cin >> a >> b;
    	string st = s.substr(a - 1, b - a + 1);
    	int pos = -1, cnt = -1;
    	pos = st.find(w,pos + 1);
    	cnt++;
    	while (pos != -1){
    		pos = st.find(w,pos + 1);
    		cnt++;
    	}
    	cout << cnt << '\n';
    }
    return 0;
}