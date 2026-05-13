#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	multiset<long long>s;
	long long sum=0;
	for(int i=1;i<=n;i++){	
		s.insert(a[i]);
		sum+=a[i];
		if(sum<0){
			sum-=*s.begin(); 
			s.erase(s.begin());
		}
		
	}
	cout<<s.size();
	return 0;
}