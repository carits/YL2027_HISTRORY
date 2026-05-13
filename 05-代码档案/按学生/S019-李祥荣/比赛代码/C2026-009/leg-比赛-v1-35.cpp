#include<bits/stdc++.h>
using namespace std;
long long n,m,a,b,c,d,ans=0;
int main(){
    freopen("leg.in","r",stdin);
    freopen("leg.out","w",stdout);
    cin>>n>>m>>a>>b>>c>>d;
    cout<<(n/2+n%2)*a+(n-(n/2+n%2))*c+(m/2+m%2)*b+(m-(m/2+m%2))*d;
    
    return 0;
}
