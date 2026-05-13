#include <iostream>
using namespace std;

const int N = 2e5 + 10;
int a[N];

void solve(){
    int n,sum = 0; 
    cin >> n;
    
    for(int i = 1;i <= n;i++){
        cin >> a[i];
        sum += a[i];
    }
    
    if(sum % n != 0){
        cout << "-1";
    } else{
        int tmp = sum / n,cnt = 0;
        for(int i = 1;i <= n;i++){
            if(a[i] > tmp) cnt++; 
        }
        
        cout << cnt;
    }
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    } 
    
    return 0;
} ///