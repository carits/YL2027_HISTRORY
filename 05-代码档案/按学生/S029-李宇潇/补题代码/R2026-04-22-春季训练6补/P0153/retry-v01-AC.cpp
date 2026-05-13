#include <iostream>
using namespace std;

void solve(string s,string t){
    for(int i = 0;i < s.size();i++){
        if (s[i] != t[0]) continue;

        for(int r = 0;r + 1 <= t.size() && i + r < s.size();r++){
            bool ok = true;
            for(int k = 1;k <= r;k++){
                if(s[i + k] != t[k]){
				 	ok = false; 
					 break; 
				}
            }
            if(!ok) break;
            
            int l = t.size() - (r + 1);
            if(l < 0 || i + r - l < 0) continue;

            bool ok2 = true;
            for(int k = 1; k <= l;k++){
                if(t[r + k] != s[i + r - k]){ 
					ok2 = false; 
					break; 
				}
            }
            
            if(ok2){
            	cout << "YES";
            	return;
			}
        }
    }
    
    cout << "NO";
}

int main(){
    int q;
    cin >> q;
    
    while(q--){
        string s,t;
        cin >> s >> t;
        
        solve(s,t);
        cout << "\n";
    }
    
    return 0;
}