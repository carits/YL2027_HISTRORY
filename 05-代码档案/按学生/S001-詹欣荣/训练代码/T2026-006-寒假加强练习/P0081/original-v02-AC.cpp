#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<vector<int>> ff(n + 1);
        for (int i=0;i<n;i++) {
            ff[a[i]].push_back(i);
        }
        
        vector<int> b(n, 0);
        int cnt = 1;
        bool v = true;
        
        for (int i = 1; i <= n; i++) {
            int len = ff[i].size();
            
            if (len % i != 0) {
                cout << -1 << "\n";
                v = false;
                break;
            } else {
                int id = 0;
                while (id < len) {
                    for (int j = 0; j < i; j++) {
                        b[ff[i][id]] = cnt;
                        id++;
                    }
                    cnt++;
                }
            }
        }
        
        if (v) {
            for (int i = 0; i < n; i++) {
                cout << b[i] << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}