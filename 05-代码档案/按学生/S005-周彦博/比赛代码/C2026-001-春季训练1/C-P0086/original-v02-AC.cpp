#include <bits/stdc++.h>
using namespace std;
int t, n;
string s;
int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> s;
        stack<int> st;
        for (int i = 0; i < n; i++){
            if (st.size() > 0 && s[i] == st.top()) st.pop();
                else st.push(s[i]);
        }
        if (st.size() > 0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}