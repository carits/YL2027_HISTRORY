#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
string s[105];

signed main() {
    cin>>n;
    for(int i=0;i<n;i++) cin>>s[i];
    int ans = 0;
    for(char a='a';a<='z';a++) {
        for(char b=a;b<='z';b++) {
            int sum=0;
            for(int i=0;i<n;i++) {
                bool ok=1;
                for(int j=0;j<s[i].size();j++) {
                    if(s[i][j]!=a&&s[i][j]!=b) {
                        ok=0;
                        break;
                    }
                }
                if(ok) sum+=s[i].size();
            }
            ans=max(ans,sum);
        }
    }
    cout<<ans;
    return 0;
}