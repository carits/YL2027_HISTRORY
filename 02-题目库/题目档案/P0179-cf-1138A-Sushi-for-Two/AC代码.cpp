#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n);
    for(int &x:a) cin >> x;
    int pre=0,cur=1,ans=0;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]) cur++;
        else{
            ans=max(ans,2*min(pre,cur));
            pre=cur;
            cur=1;
        }
    }
    ans=max(ans,2*min(pre,cur));
    cout << ans << '\n';
    return 0;
}
