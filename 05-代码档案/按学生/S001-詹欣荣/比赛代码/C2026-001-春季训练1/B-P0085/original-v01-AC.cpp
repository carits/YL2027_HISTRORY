#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	    int m;
	    cin>>m;
	    int a[m+1];
	    bool f=true;
	    int l;
	    for(int j=1;j<=m;j++){
	        cin>>a[j];
	    }
	    for(int j=2;j<=m;j++){
	        if(a[j-1]>a[j]){
	            f=false;
	        }
	    }
	    if(f){
	        cout<<m<<endl;
	        continue;
	    }
	    cout<<1<<endl;
	}
    return 0;
}