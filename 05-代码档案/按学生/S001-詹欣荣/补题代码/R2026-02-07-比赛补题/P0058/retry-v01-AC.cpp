#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int l,r;
		cin>>l>>r;
        string s;
		cin>>s;
		int cntl=l,cntr=r;
		for(int j=0;j<l+r;j++){
			if(s[l+r-1-j]=='?'){
				s[l+r-1-j]=s[j];
			}
		}
		bool f=false;
		for(int j=0;j<l+r;j++){
			if(s[j]=='0'){
				cntl--;
			}
			if(s[j]=='1'){
				cntr--;
			}
			if(s[j]!=s[l+r-1-j]){
				f=true;
				break;
			}
		}
		if(cntl<0||cntr<0){
			cout<<-1<<endl;
			continue;
		}
		if(f){
			cout<<-1<<endl;
			continue;
		}
		if(cntl%2!=0&&cntr%2!=0){
			cout<<-1<<endl;
			continue;
		}
		if((cntl%2!=0||cntr%2!=0)&&s[(l+r)/2]!='?'){
			cout<<-1<<endl;
			continue;
		}
		if((cntl%2!=0||cntr%2!=0)&&(l+r)%2==0){
			cout<<-1<<endl;
			continue;
		}
		if(cntl%2!=0){
			s[(l+r)/2]=(char)0+'0';
			cntl--;
		}
		if(cntr%2!=0){
			s[(l+r)/2]=(char)1+'0';
			cntr--;
		}
		for(int j=0;j<l+r;j++){
			if(s[j]=='?'){
				if(cntl>=2){
					cntl-=2;
					s[j]=(char)0+'0';
					s[l+r-1-j]=(char)0+'0';
				}else{
					cntr-=2;
					s[j]=(char)1+'0';
					s[l+r-1-j]=(char)1+'0';
				}
			}
		}
		cout<<s<<endl;;
	}
	return 0;
}