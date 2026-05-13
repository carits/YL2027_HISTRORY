#include <iostream>
using namespace std;

const int N = 2e5 + 10;
int a[N];

int main(){
    int n;
    cin >> n;
    
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    
    int cnt = 1,ans = 0;
    for(int i = 1;i < n;i++){
        if(a[i + 1] <= a[i] * 2){
            cnt++;
        } else{
            ans = max(ans,cnt);
            cnt = 1;
        }
    }
    
    cout << ans;
    
    return 0;
}