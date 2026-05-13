#include<bits/stdc++.h>
using namespace std;
int t,x;
vector<int> v;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>t;
	while(t--){
		cin>>x;
		if(x>45){
			cout<<-1<<endl;
			continue;
		}
		v.clear();
		for(int d=9;d>=1;d--){
			if(x>=d){
				v.push_back(d);
				x-=d;
			}
		}
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++) cout<<v[i];
		cout<<'\n';
	}
	return 0;
}