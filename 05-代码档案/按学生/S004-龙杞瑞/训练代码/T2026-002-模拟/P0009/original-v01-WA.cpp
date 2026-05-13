#include <bits/stdc++.h> 
#define int long long
using namespace std;
int t,n;
string s; 
signed main(){
	cin>>t;
	while(t--){
	    cin>>s;
	    if(s=="es"||s=="Ye") cout<<"YES"<<'\n';
	    else{
	        int f=0;
	        for(int i=0;i<s.size();i++){
	            if(s[i]=='Y'){
	                if(s[i+1]=='e'&&s[i+2]=='s'){
	                    cout<<"YES"<<'\n';
	                    f=1;
	                    break;
	                }
	            }
            }
            if(f==0){
                cout<<"NO"<<'\n';
            }
	    }
	}
	return 0;
}