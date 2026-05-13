#include<bits/stdc++.h>
using namespace std;
string a,b;
bool lf(string a,string b){
	string a1=a.substr(0,a.length()/2);
	string a2=a.substr(a.length()/2); 
	string b1=b.substr(0,b.length()/2);
	string b2=b.substr(b.length()/2); 
	//cout<<a1<<" "<<a2<<" "<<b1<<" "<<b2<<endl;
	if(a1==b1&&a2==b2){
		return 1;
	}
	else if(a1==b2&&a2==b1){
		return 1;
	}
	else{
		if(a.length()==1&&b.length()==1){
			if(a==b){
				return 1;
			} 
			else{
				return 0;
			}
		}
		bool flag1=lf(a1,b1)&&lf(a2,b2);
		bool flag2=lf(a1,b2)&&lf(a2,b1); 
		return flag1||flag2;
	}
}
int main(){
	cin>>a>>b;
	if(lf(a,b)){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}