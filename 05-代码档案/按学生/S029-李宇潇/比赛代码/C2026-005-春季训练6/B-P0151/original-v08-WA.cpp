#include <iostream>
#include <set>
using namespace std;

const int N = 2e5 + 10;
int a[N],dp[N],pos[N];

int main(){
    int n,ans = 0;
    cin >> n;
    
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    
    pos[1] = 1;
    for(int i = 1;i <= n;i++){
        dp[i] = 1;
        if(a[pos[i - 1]] * 2 > a[i] && a[i] > a[pos[i - 1]]){
            dp[i] = dp[i - 1] + 1;
            pos[i] = pos[i - 1];
        } else{
            for(int j = i - 1;j >= 1;j--){
                if(a[j] * 2 > a[i] && a[i] > a[j]){
                    dp[i] = dp[i - 1] + 1;
                    pos[i] = j;
                    break;
                }
            }
        }
        
        ans = max(ans,dp[i]);
    }
    
    cout << ans; 
    
    return 0;
}
