#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n;
        int ans=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            int a[15]={0};
            int cnt=0;
            int maxn=0;
            for(int j=i;j<n&&j<i+100;j++){
                a[s[j]-'0']++;
                if(a[s[j]-'0']==1){
                    cnt++;
                }
                maxn=max(maxn,a[s[j]-'0']);
                if(maxn<=cnt){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}