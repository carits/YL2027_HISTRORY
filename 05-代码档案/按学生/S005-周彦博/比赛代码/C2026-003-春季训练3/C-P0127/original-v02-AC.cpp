#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6 + 5;
int a[N],dx[N];
signed main() {
    int T;
    cin>>T;
    while(T--){
        int n,id=-1;
        cin>>n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            dx[i] = dx[i - 1] + a[i];
        }
        int dxdx=0;
        for(int i = n; i;i--){
            if(dx[i] < dxdx){
                dxdx = dx[i];
                id = i;
            }
        }
        if(id == -1)cout << dx[n] << '\n';
        else{
            int s = 0;
            for(int i = 1;i <= n;i++){
                if(i <= id)s -= a[i];
                else s += a[i];
            }
            cout << s << '\n';
        }
    }
    return 0;
}