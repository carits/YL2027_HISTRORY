#include <bits/stdc++.h>
using namespace std ;
const int N = 5005 ;
int n ;
string s ;
int f[N][N] ;
void solve() 
{
	cin >> n >> s ;
	stack<char> st ;
	for (auto c : s)
		if (!st.empty() && st.top() == c) 
            st.pop() ;
		else 
            st.push(c) ;
	cout << (st.empty() ? "YES\n" : "NO\n") ;
}
int main() 
{
	int T ;
	cin >> T ;
	while (T--) 
        solve() ;
	return 0;
}