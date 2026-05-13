#include<bits/stdc++.h>
using namespace std;

long long n,x,sum,ans;
priority_queue<long long,vector<long long>,greater<long long> >q;
int main(){
	cin>> n;
	for(int i=1;i<=n;i++){
		cin>> x;
		sum+=x;
		q.push(x);
		if(sum<0){
			sum-=q.top();
			q.pop();
		}
	}
//	while(!q.empty()){
//		cout<< q.top() << "\n";q.pop();
//	}
	cout<< q.size();
	return 0;
}