#include <bits/stdc++.h>
using namespace std;
long long a[10000005];
long long c[10000005];
bool f=false;
int n,k;
void gb(long long ans[], long long b[], int l, int mid, int r) {
    int ll = l;
    int rr = mid + 1;
    int kk = l;
    
    while (ll <= mid && rr <= r) {
        if (ans[ll] <= ans[rr]) {
            b[kk] = ans[ll];
            ll++;
        } else {
            b[kk] = ans[rr];
            rr++;
        }
        kk++;
    }
    
    while (ll <= mid) {
        b[kk] = ans[ll];
        ll++;
        kk++;
    }
    
    while (rr <= r) {
        b[kk] = ans[rr];
        rr++;
        kk++;
    }
    
    for (int i = l; i <= r; i++) {
        ans[i] = b[i];
    }
}

void fz(long long ans[], long long b[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        fz(ans, b, l, mid);
        fz(ans, b, mid + 1, r);
        gb(ans, b, l, mid, r);
    }
}
int main(){
	int x,y;
    ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>k>>x>>y;
	a[0]=1;
	for(int i=1;i<=n;i++){
		a[i]=(a[i-1]*x+y)%1000000007;
	}
	fz(a,c,1,n);
	cout<<a[k];
	return 0;
}