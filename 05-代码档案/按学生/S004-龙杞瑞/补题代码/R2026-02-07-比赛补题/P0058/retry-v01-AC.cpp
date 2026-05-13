#include<bits/stdc++.h>
using namespace std;
int t,a,b,n;
string s;
void solve(){
	int cnt0=0,cnt1=0,f=0;
	cin>>a>>b>>s;
    n = s.size()-1;
    for(int i=0;i<=n;i++){
        int j=n-i;
        if(s[i]!='?'&&s[j]!='?'&&s[i]!=s[j]){
            f=1;
            break;
        }
    }
    if(f){
        cout<<-1<< "\n";
        return;
    }
    for(int i=0;i<=n;i++) {
        if(s[i]=='0') cnt0++;
        else if (s[i]=='1') cnt1++;
    }
    cnt0=a-cnt0,cnt1=b-cnt1;
    if(cnt0<0||cnt1<0){
        cout<<-1<<"\n";
        return;
    }
    for(int i=0;i<=n/2;i++){
            int j=n-i;
            if(s[i]!='?'&&s[j]=='?'){
                s[j]=s[i];
                if (s[i]=='0') cnt0--;
                else cnt1--;
            }else if(s[i]=='?'&&s[j]!='?'){
                s[i]=s[j];
                if (s[j]=='0') cnt0--;
                else cnt1--;
            }
        }
        if (cnt0<0||cnt1<0){
            cout<<-1<<"\n";
			return;        
        }
        for(int i=0;i<=n/2;i++) {
            int j=n-i;
            if (s[i]=='?'&&s[j]=='?') {
                if(i==j){
                    if(cnt0>0){
                        s[i]='0';
                        cnt0--;
                    }else if(cnt1>0) {
                        s[i]='1';
                        cnt1--;
                    }else{
                        f=1;
                        break;
                    }
                }else{
                    if(cnt0>=2){
                        s[i]=s[j]= '0';
                        cnt0-=2;
                    }else if (cnt1>=2) {
                        s[i]=s[j]='1';
                        cnt1-=2;
                    }else{
                        f=1;
                        break;
                    }
                }
            }
        }
        if (f||cnt0!=0||cnt1!=0) {
            cout<<-1<<"\n";
            return;
        }
        for(int i=0;i<=n;i++){
            if(s[i]!=s[n-i]){
                cout<<-1<<'\n';
                return ;
            }
        }
        cout<<s<<"\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--) solve();
    return 0;
}