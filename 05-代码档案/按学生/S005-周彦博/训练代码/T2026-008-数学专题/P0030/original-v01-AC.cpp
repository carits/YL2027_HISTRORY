#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5;
int t;
int a[N],b[N];
void so(){
    int n, ans=0;
    cin >> n;
    for(int i = 1; i <= n;i++){
    	cin >> a[i];
    	b[a[i]] = i;
    }
    sort(a + 1, a + 1 + n);
    for(int i = 1; i <= n; i++){
    	for(int j = i + 1; j <= n && a[i] * a[j] <= 2 * n; j++){
    	    if(a[i] * a[j] == b[a[i]] + b[a[j]]) ans++;
    	}
    }
    cout << ans << endl;
}
signed main(){
    cin >> t;
    while(t--){
    	so();
    }
    return 0;
}