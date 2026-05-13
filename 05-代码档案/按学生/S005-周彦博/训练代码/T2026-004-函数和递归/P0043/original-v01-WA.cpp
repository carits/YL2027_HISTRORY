#include <bits/stdc++.h>
using namespace std;
string s, w;
int n, m, q , a, b;
int main()
{
    
    cin >> n >> m >> q >> s >> w;
    for (int i = 1; i <= q; i++)
    {
    	cin >> a >> b;
    	int cnt = -1;
    	int pos = a - 1;
    	while(pos != -1){
    		cnt++;
    		pos = s.find(w, pos + 1);
    		if (pos + m > b) break;
    	}
    	cout << cnt << '\n';
    }
    return 0;
}