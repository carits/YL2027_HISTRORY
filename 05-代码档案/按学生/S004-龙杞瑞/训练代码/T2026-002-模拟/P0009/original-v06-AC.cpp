#include <bits/stdc++.h> 
#define int long long
using namespace std;
int t,n;
string st="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes"; 
string s; 
signed main(){
	cin>>t;
	while(t--){
	    cin>>s;
	    if(st.find(s)<1000) cout<<"YES\n";
	    else cout<<"NO\n";  
	}
	return 0;
}