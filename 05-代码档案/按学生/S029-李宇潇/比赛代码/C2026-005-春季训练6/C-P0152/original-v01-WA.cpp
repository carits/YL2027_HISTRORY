#include <iostream>
using namespace std;

void solve(){
    int n,ans = 0;
    string bin1,bin2,tmp1,tmp2;
    cin >> n >> bin1 >> bin2;
    
    for(int i = 0;i < n;i++){
        if(bin1[i] != bin2[i]){
            ans += 2;
        } else{
            tmp1 += bin1[i];
            tmp2 += bin2[i];
        }
    }
    
    cout << ans << "\n";
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    
    return 0;
}