#include<bits/stdc++.h>
using namespace std;
int n,m,s;
queue<int>q;
int main(){
	cin>>n>>s>>m;
	for(int i=s;i<=n;i++) q.push(i);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(j==m){
				cout<<q.front()<<" ";
				q.pop();
			}else{
				q.push(q.front());
				q.pop();
			}
		}
	}
	return 0;
}