#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> a(n), b;
        for(int &x: a) cin >> x;
        b = a;
        sort(b.begin(), b.end());
        int mx = b[n - 1], sec = b[n - 2];
        for(int x: a){
            if(x == mx) cout << x - sec << ' ';
            else cout << x - mx << ' ';
        }
        cout << "\n";
    }
    return 0;
}
