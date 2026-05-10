#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s, t;
    cin >> n >> s >> t;
    string a = s, b = t;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a != b){
        cout << -1 << "\n";
        return 0;
    }
    vector<int> ans;
    for(int i = 0; i < n; i++){
        int p = i;
        while(s[p] != t[i]) p++;
        while(p > i){
            swap(s[p], s[p - 1]);
            ans.push_back(p);
            p--;
        }
    }
    cout << ans.size() << "\n";
    for(int x: ans) cout << x << ' ';
    cout << "\n";
    return 0;
}
