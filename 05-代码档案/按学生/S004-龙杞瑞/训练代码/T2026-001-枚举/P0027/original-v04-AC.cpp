#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,t;
signed main(){
    cin>>t;
    while (t--){
    	int ans=0,a[150005];
        cin>>n;
        vector<int>vt;
        for (int i=0;i<n;i++) cin>>a[i];
        for (int k=1;k*k<=n;k++){
            if (n%k==0){
                vt.push_back(k);
                if(k!=n/k) vt.push_back(n/k);
            }
        }
        for(int k=0;k<vt.size();k++){
        	int d=vt[k];
            int m=n/d;
            if(m==1) continue;
            int minn=1e18,maxn=-1e18;
            for (int i=0;i<m;i++) {
                int sum=0;
                for (int j=0;j<d;j++) sum+=a[i*d+j];
                minn=min(minn,sum);
                maxn=max(maxn,sum);
            }
            ans=max(ans,maxn-minn);
        }
        cout<<ans<<'\n';
    }
    return 0;
}