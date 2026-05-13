#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
 	for(int i=1;i<=t;i++){
	 	int n;
	 	cin>>n;
		string s;
	 	vector<int>v;
	 	cin>>s;
		for(int j=0;j<n;j++){
			if(s[j]=='0'){
				v.push_back(j+1);
			}
		}
		cout<<v.size()<<endl;
		for(int j=0;j<v.size();j++){
			cout<<v[j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}