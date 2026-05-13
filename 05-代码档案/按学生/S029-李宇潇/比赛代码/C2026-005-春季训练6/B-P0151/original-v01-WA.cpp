#include <iostream>
#include <set>
using namespace std;

const int N = 2e5 + 10;
set<int> se;
int a[N];

int main(){
    int n;
    cin >> n;
    
    for(int i = 1;i <= n;i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    
    int cnt = 1,ans = 0;
    for(int i = 1;i < n;i++){
        auto it = se.upper_bound(a[i]);
        if(it == se.end()) continue;
        
        int val = *it;
        if(val > a[i] && val <= a[i] * 2){
            cnt++;
        } else{
            ans = max(ans,cnt);
            cnt = 1;
        }
    }
    
    cout << ans;
    
    return 0;
}