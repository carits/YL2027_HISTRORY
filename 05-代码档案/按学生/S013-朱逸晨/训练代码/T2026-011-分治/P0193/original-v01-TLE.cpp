#include<bits/stdc++.h>
using namespace std;
bool f(string a,string b){
	if(a==b){
		return 1;
	}
	if(a.size()&1){
		return 0;
	}
	string a1=a.substr(0,a.size()/2),a2=a.substr(a.size()/2,a.size()/2);
	string b1=b.substr(0,b.size()/2),b2=b.substr(b.size()/2,b.size()/2);
//	cout<<a<<" "<<b<<endl<<a1<<" "<<a2<<" "<<b1<<" "<<b2<<endl<<endl;
	if((f(a1,b1)&&f(a2,b2))||(f(a1,b2)&&f(a2,b1))){
		return 1;
	}
	return 0;
}
string a,b;
int main(){
	cin>>a>>b;
	if(f(a,b)){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}