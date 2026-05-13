#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int INF = 1e9 + 5;

int main(){
    int n;
    cin >> n;
    
    vector<int> l(n + 2),r(n + 2);
    for(int i = 1;i <= n;i++){
        cin >> l[i] >> r[i];
    }
    
    vector<int> pre_l(n + 2),pre_r(n + 2);
    pre_l[0] = -INF;
    pre_r[0] = INF;
    for(int i = 1;i <= n;i++){
        pre_l[i] = max(pre_l[i - 1],l[i]);
        pre_r[i] = min(pre_r[i - 1],r[i]);
    }
    
    vector<int> suf_l(n + 2),suf_r(n + 2);
    suf_l[n + 1] = -INF;
    suf_r[n + 1] = INF;
    for (int i = n;i >= 1;i--){
        suf_l[i] = max(suf_l[i + 1], l[i]);
        suf_r[i] = min(suf_r[i + 1], r[i]);
    }
    
    int ans = 0;
    for (int i = 1;i <= n;i++){
        int left = max(pre_l[i - 1],suf_l[i + 1]);
        int right = min(pre_r[i - 1],suf_r[i + 1]);
        int len = max(0,right - left);
        ans = max(ans,len);
    }
    
    cout << ans;
    
    return 0;
}