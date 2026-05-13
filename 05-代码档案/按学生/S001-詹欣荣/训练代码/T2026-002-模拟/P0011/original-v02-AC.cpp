#include<bits/stdc++.h>
using namespace std;
string s[15];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=7;j++){
			cin>>s[j];
		}
		bool b=true;
		for(int j=0;j<=7;j++){
			if(s[j][0]=='R'&&s[j][1]=='R'&&s[j][2]=='R'&&s[j][3]=='R'&&s[j][4]=='R'&&s[j][5]=='R'&&s[j][6]=='R'&&s[j][7]=='R'){
				b=false;
			}
		}
		if(b){
			cout<<"B"<<endl;
		}else{
			cout<<"R"<<endl;
		}
	}
	return 0;
}