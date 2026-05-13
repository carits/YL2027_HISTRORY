#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e4+5,M=1e7+5;
int a[N],n,m,p,v,c[M];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0); 
    cin>>n>>m;
    c[0]=n;
    int mn=0,mx=0;
    while(m--){
        cin>>p>>v;
        c[a[p]]--;
        a[p]+=v;
        c[a[p]]++;
        while(!c[mn]) mn++;
        if(a[p]>mx) mx=a[p];
        cout<<mx-mn<<" ";
    }
    return 0;
}