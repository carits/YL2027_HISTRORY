#include<bits/stdc++.h>
    using namespace std;
    vector<int> v[200005];
    int a[1000005],b[1000005];
    int main(){
    	int n;
    	cin>>n;
    	for(int i=1;i<=n;i++){
    		a[i]=a[i-1];
    		b[i]=b[i-1];
    		char x;
    		cin>>x;
    		if(x=='1'){
    			b[i]++;
    		}else{
    			a[i]++;
    		}
    	}
    	int maxn=0;
    	for(int i=0;i<=n;i++){
    		v[a[i]-b[i]+100005].push_back(i);
    	}
    	for(int i=0;i<200005;i++){
    	    if(v[i].size()>=2)
    	        maxn=max(v[i][v[i].size()-1]-v[i][0],maxn);
    	}
    	cout<<maxn;
    	return 0;
    }