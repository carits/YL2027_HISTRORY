#include<bits/stdc++.h>
using namespace std;
int l[100005];
int r[100005];
int main(){
    int n,m,q;
    cin>>n>>m>>q;
    string a,b;
    cin>>a>>b;
    int cnt=0;
    for(int i=0;i<n;i++){
        bool f=true;
        for(int j=0;j<m;j++){
            if(a[i+j]!=b[j]){
                f=false;
                break;
            }
        }
        if(f){
            cnt++;
            l[cnt]=i;
            r[cnt]=i+b.size()-1;
        }
    }
    
    for(int i=1;i<=q;i++){
        int ll,rr,ans=0;
        cin>>ll>>rr;
        for(int j=1;j<=cnt;j++){
            if(ll-1<=l[j]&&rr-1>=r[j]){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}