#include<iostream>
#include<cstring>
using namespace std;
const int M=2e5+10;
char s[M];
int t,n,k,ans,a[3][M];
int main() {
    cin>>t;
    while(t--) {
        a[0][0]=a[1][0]=a[2][0]=0;
        cin>>n>>k>>s;
        ans=M;
        string t="RGB";
        for(int i=0;i<n;i++) {
            for(int j=0;j<=2;j++){
                if(s[i]!=t[(i+j)%3])a[j][i+1]=a[j][i]+1;
                else a[j][i+1]=a[j][i];
            }
        }
        for(int i=0;i+k<=n;i++) for(int j=0;j<=2;j++) ans=min(ans,a[j][i+k]-a[j][i]);
        cout<<ans<<'\n';
    }
    return 0;
}