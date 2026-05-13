#include <iostream>
using namespace std;

void solve(){
    int n;
    string s1,s2;
    cin >> n >> s1 >> s2;
    
    int ans = 0;
    for (int i = 0;i < n; ){
        if(s1[i] != s2[i]){
            ans += 2;
            i++;
        } else{
            if(i + 1 < n && s1[i + 1] == s2[i + 1] && s1[i] != s1[i + 1]){
                ans += 2;
                i += 2;
            } else{
                if(s1[i] == '0') ans++;
                i++;
            }
        }
    }
    
    cout << ans << "\n";
}

int main(){
    int t;
    cin >> t;
    
    while(t--) solve();
    
    return 0;
}