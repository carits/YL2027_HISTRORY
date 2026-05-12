#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    while(T--){
        int k,q; cin >> k >> q;
        vector<int>a(k);
        for(int &x:a) cin >> x;
        for(int i=0;i<q;i++){
            int n; cin >> n;
            cout << min(n,a[0]-1) << (i+1==q?'\n':' ');
        }
    }
    return 0;
}
