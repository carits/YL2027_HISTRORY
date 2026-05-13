#include<bits/stdc++.h>
using namespace std;

long long n,k,sum,ans;
int const N=3e5+5;
struct node{
    int t,b;
}a[N];
priority_queue<long long,vector<long long>,greater<long long>>q;
bool cmp(node x,node y){
    return x.b<y.b;
}
int main(){
	cin>> n >> k;
	for(int i=1;i<=n;i++){
		cin>> a[i].t >> a[i].b;
    }
    sort(a+1,a+n+1,cmp);
	for(int i=n;i>=1;i--){
		sum+=a[i].t;
		q.push(a[i].t);
		if(n-i+1>k){
			sum-=q.top();
			q.pop();
		}
        ans=max(ans,sum*a[i].b);
	}
//	while(!q.empty()){
//		cout<< q.top() << "\n";q.pop();
//	}
	cout<< ans;
	return 0;
}