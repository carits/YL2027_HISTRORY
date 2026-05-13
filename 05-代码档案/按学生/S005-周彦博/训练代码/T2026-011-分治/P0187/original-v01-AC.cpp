#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, t[500005], a[500005], ans;
void so(int ll, int rr){
    if(ll == rr) return;
    int mm = (ll + rr) >> 1;
    so(ll, mm);
    so(mm + 1, rr);
    int i = ll, j = mm + 1, k = ll;
    for (; i <= mm && j <= rr;){
        if (a[i] <= a[j]) t[k++] = a[i++];
        else{
            t[k++] = a[j++];
            ans += (mm + 1) - i;
        }
    }
    for (; i <= mm; i++, k++) t[k] = a[i];
    for (; j <= rr; j++, k++) t[k] = a[j];
    for (k = ll; k <= rr; k++) a[k] = t[k];
}
signed main(){
    cin >>n;
    for (int i = 1; i <=n; i++){
        cin >> a[i];
    }
    so(1, n);
    cout << ans;
    return 0;
}