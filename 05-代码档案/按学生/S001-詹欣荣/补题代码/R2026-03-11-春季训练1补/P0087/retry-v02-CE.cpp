#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int m,x,y;
		cin>>m>>x>>y;
		int a[m-y+x]={};
		queue<int>q;
		for(int j=1;j<=x;j++){
			cin>>a[j];
		}
		int minn=INT_MAX;#include<bits/stdc++.h>
		using namespace std;
		int main(){
			int n;
			cin>>n;
			for(int i=1;i<=n;i++){
				int m,x,y;
				cin>>m>>x>>y;
				int a[m-y+x]={};
				queue<int>q;
				for(int j=1;j<=x;j++){
					cin>>a[j];
				}
				int minn=INT_MAX;
				for(int j=1;j<=y-x;j++){
					int b;
					cin>>b;
					minn=min(minn,b);
					q.push(b);
				}
				for(int j=x+1;j<=m-y+x;j++){
					cin>>a[j];
				}
				
				
				
				
				
				while(q.front()!=minn){
					q.push(q.front());
					q.pop();
				}
				
				
				
				
				
				int j=1;
				while(a[j]<=q.front()){
					cout<<a[j]<<" ";
					j++;
				}
				for(int l=1;l<=y-x;l++){
					cout<<q.front()<<" ";
					q.pop();
				}
				while(j<=m-y+x){
					cout<<a[j]<<" ";
					j++;
				}
				cout<<endl;
			}
			return 0;
		}
		for(int j=1;j<=y-x;j++){
			int b;
			cin>>b;
			minn=min(minn,b);
			q.push(b);
		}
		for(int j=x+1;j<=m-y+x;j++){
			cin>>a[j];
		}
		
		
		
		
		
		while(q.front()!=minn){
			q.push(q.front());
			q.pop();
		}
		
		
		
		
		
		int j=1;
		while(a[j]<=q.front()){
			cout<<a[j]<<" ";
			j++;
		}
		for(int l=1;l<=y-x;l++){
			cout<<q.front()<<" ";
			q.pop();
		}
		while(j<=m-y+x){
			cout<<a[j]<<" ";
			j++;
		}
		cout<<endl;
	}
	return 0;
}