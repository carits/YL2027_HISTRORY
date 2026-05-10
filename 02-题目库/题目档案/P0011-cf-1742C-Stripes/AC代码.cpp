#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        vector<string> s(8);
        for(auto &x: s) cin >> x;
        char ans = 'B';
        for(int i = 0; i < 8; i++){
            bool ok = true;
            for(int j = 0; j < 8; j++) ok &= (s[i][j] == 'R');
            if(ok) ans = 'R';
        }
        cout << ans << "\n";
    }
    return 0;
}
