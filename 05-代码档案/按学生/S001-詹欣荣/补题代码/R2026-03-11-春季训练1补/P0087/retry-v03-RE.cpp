#include<bits/stdc++.h>
    using namespace std;
    int main(){
    	int n;
    	cin>>n;
    	for(int i=1;i<=n;i++){
    		int m,x,y;
    		cin>>m>>x>>y;
    		
    		queue<int>q;
    		queue<int>a;
    		int minn=INT_MAX;
    		for(int j=1;j<=m;j++){
				int k;
				cin>>k;
				if(k<=x||k>=y+1){
					a.push(k);
				}else{
					q.push(k);
					minn=min(minn,k);
				}
			}
    		
    		
    		
    		
    		while(q.front()!=minn){
    			q.push(q.front());
    			q.pop();
    		}
    		
    		
    		
    		
    		
    		int j=1;
    		while(a.front()<=q.front()){
    			cout<<a.front()<<" ";
    			a.pop();
    		}
    		while(q.size()!=0){
    			cout<<q.front()<<" ";
    			q.pop();
    		}
    		while(a.size()!=0){
    			cout<<a.front()<<" ";
				a.pop();
    		}
    		cout<<endl;
    	}
    	return 0;
    }