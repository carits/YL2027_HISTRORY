#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n, l = 1, r = 2e9;
signed main(){
    cin >> n;
    while(l < r){
        int m = (l + r) / 2, len = m * log10 (1.0 * m) + 1;
        if(len < n) l = m + 1;
        else r = m;
    }
    cout << l << endl;
    return 0;
}

