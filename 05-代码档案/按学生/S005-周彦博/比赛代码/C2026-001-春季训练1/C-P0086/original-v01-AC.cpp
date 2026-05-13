#include <bits/stdc++.h>
using namespace std;
int t, n;
string s;
int main(){
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