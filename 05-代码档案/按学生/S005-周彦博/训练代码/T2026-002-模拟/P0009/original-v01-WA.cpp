#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
    cin >> n;
    while(n--){
        cin >> s;
        for (int i = 0; i < s.size(); i++){
            if(s[i] != 'Y' && s[i] != 'y' && s[i] != 'e' && s[i] != 's'){
                cout << "NO\n";
                break;
            }
            if (i != 0){    
                if (((s[i] == 'Y' || s[i] == 'y')&& s[i - 1] != 's' && s[i - 1] != 'S') || ((s[i] == 'E' || s[i] == 'e')&& s[i - 1] != 'Y' && s[i - 1] != 'y') || ((s[i] == 's' || s[i] == 'S')&& s[i - 1] != 'E' && s[i - 1] != 'e')){
                    cout << "NO\n";
                    break;
                }
            }
            if (i == s.size() - 1) cout << "YES\n";
        }
    }
    return 0;
}