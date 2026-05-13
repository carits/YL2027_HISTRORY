#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n,s[100005];
signed main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>s[i];
        int max1=s[0],max2=-1e9,cnt = 0;
        for(int i=2;i<=n;i++) if(s[i]>max1) max1=s[i]; 
        for(int i=1;i<=n;i++) if(s[i]<max1&&s[i]>max2) max2=s[i];
        for(int i=1;i<=n;i++) if(s[i]==max1) cnt++;
        for(int i=1;i<=n;i++) {
            if(s[i]!=max1) cout<<s[i]-max1;
            else{
                if(cnt>1) cout<<0;
                else cout<<s[i]-max2;
            }
            if(i<n-1) cout<<" ";
        }
        cout<<'\n';
    }
    return 0;
}