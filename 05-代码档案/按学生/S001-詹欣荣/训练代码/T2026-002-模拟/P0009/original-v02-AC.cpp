#include<bits/stdc++.h>
using namespace std;
string m="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		if(m.find(s)<=50){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}