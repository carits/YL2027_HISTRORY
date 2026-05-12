#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> p(n);
        iota(p.begin(),p.end(),1);
        reverse(p.begin(),p.end());
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cout << p[j] << (j+1==n?'\n':' ');
            if(i+1<n) swap(p[i],p[i+1]);
        }
    }
    return 0;
}
