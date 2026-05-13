#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("leg.in","r",stdin);
    freopen("leg.out","w",stdout);
    long long n, m, a, b, c, d, k=0;
    cin >> n >> m >> a >> b >> c >> d;
    k=min(b+c,a+d)*min(n,m);
    if(n>m)k+=(n-m)/2*(a+c)+(n-m)%2*a;
    if(m>n)k+=(m-n)/2*(b+d)+(m-n)%2*b;
    cout << k;
    return 0;
}
