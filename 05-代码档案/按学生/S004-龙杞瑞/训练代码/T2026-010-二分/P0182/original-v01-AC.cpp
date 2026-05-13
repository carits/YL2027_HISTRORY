#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
char c;
string s;
int t,n,a[N];
void solve(){
    cin>>n>>c>>s; 
    int cnt=0,ans=0;
    for(int i=0;i<n;i++) if (s[i]=='g') a[++cnt]=i;
    for(int i=0;i<n;i++){
        if(s[i]==c){
            int sum=0;
            if(s[i]!='g'){
                int pos=lower_bound(a+1,a+cnt+1,i)-a;
                if(pos<=cnt) sum=a[pos]-i;
                else sum=n-i+a[1];
            }
            ans=max(ans,sum);
        }
    }
    cout<<ans<<'\n';
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--) solve();
    return 0;
}